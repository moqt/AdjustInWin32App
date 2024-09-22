#include "pch.h"
#include "iostream"

#include <winrt/AdjustSdk.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace std;

int main()
{
    init_apartment();

    AdjustSdk::Example ex;
    ex.SampleProperty(42);
    wcout << ex.SampleProperty() << endl;
    wcout << AdjustSdk::Example::SayHello().c_str() << endl;

    {
        const auto appToken = L"APP_TOKEN";
        const auto environment = L"sandbox";  // "sandbox",  "production"
        AdjustSdk::AdjustConfig aconfig{appToken, environment, AdjustSdk::LogLevel::Verbose};

        AdjustSdk::Adjust::ApplicationLaunching(aconfig);
        //AdjustSdk::Adjust::ApplicationActivated();

        const auto attribution = AdjustSdk::Adjust::GetAttributon();
        const auto trackerToken = attribution.TrackerToken();
        const auto campaign = attribution.Campaign();

        AdjustSdk::AdjustEvent event(L"HelloWorld");
        AdjustSdk::Adjust::TrackEvent(event);
    }
}
