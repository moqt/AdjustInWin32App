// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_AdjustSdk_2_H
#define WINRT_AdjustSdk_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/AdjustSdk.1.h"
WINRT_EXPORT namespace winrt::AdjustSdk
{
    struct __declspec(empty_bases) Adjust : winrt::AdjustSdk::IAdjustClass
    {
        Adjust(std::nullptr_t) noexcept {}
        Adjust(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustClass(ptr, take_ownership_from_abi) {}
        Adjust();
        [[nodiscard]] static auto ApplicationLaunched();
        static auto ApplicationLaunching(winrt::AdjustSdk::AdjustConfig const& adjustConfig);
        static auto ApplicationActivated();
        static auto ApplicationDeactivated();
        static auto TrackEvent(winrt::AdjustSdk::AdjustEvent const& adjustEvent);
        static auto SetEnabled(bool enabled);
        static auto IsEnabled();
        static auto SetOfflineMode(bool offlineMode);
        static auto AppWillOpenUrl(winrt::Windows::Foundation::Uri const& url);
        static auto GetWindowsAdId();
        static auto AddSessionCallbackParameter(param::hstring const& key, param::hstring const& value);
        static auto AddSessionPartnerParameter(param::hstring const& key, param::hstring const& value);
        static auto RemoveSessionCallbackParameter(param::hstring const& key);
        static auto RemoveSessionPartnerParameter(param::hstring const& key);
        static auto ResetSessionCallbackParameters();
        static auto ResetSessionPartnerParameters();
        static auto SendFirstPackages();
        static auto SetPushToken(param::hstring const& pushToken);
        static auto GetAdid();
        static auto GetAttributon();
        static auto GdprForgetMe();
        static auto GetSdkVersion();
    };
    struct __declspec(empty_bases) AdjustAttribution : winrt::AdjustSdk::IAdjustAttributionClass
    {
        AdjustAttribution(std::nullptr_t) noexcept {}
        AdjustAttribution(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustAttributionClass(ptr, take_ownership_from_abi) {}
        AdjustAttribution();
        static auto FromJsonString(param::hstring const& attributionString, param::hstring const& adid);
        static auto ToDictionary(winrt::AdjustSdk::AdjustAttribution const& attribution);
        static auto FromDictionary(param::map_view<hstring, winrt::Windows::Foundation::IInspectable> const& attributionObjectMap);
    };
    struct __declspec(empty_bases) AdjustConfig : winrt::AdjustSdk::IAdjustConfigClass
    {
        AdjustConfig(std::nullptr_t) noexcept {}
        AdjustConfig(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustConfigClass(ptr, take_ownership_from_abi) {}
        AdjustConfig(param::hstring const& appToken, param::hstring const& environment, winrt::Windows::Foundation::IReference<winrt::AdjustSdk::LogLevel> const& logLevel);
    };
    struct __declspec(empty_bases) AdjustEvent : winrt::AdjustSdk::IAdjustEventClass
    {
        AdjustEvent(std::nullptr_t) noexcept {}
        AdjustEvent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustEventClass(ptr, take_ownership_from_abi) {}
        explicit AdjustEvent(param::hstring const& eventToken);
    };
    struct __declspec(empty_bases) AdjustEventFailure : winrt::AdjustSdk::IAdjustEventFailureClass
    {
        AdjustEventFailure(std::nullptr_t) noexcept {}
        AdjustEventFailure(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustEventFailureClass(ptr, take_ownership_from_abi) {}
        AdjustEventFailure();
    };
    struct __declspec(empty_bases) AdjustEventSuccess : winrt::AdjustSdk::IAdjustEventSuccessClass
    {
        AdjustEventSuccess(std::nullptr_t) noexcept {}
        AdjustEventSuccess(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustEventSuccessClass(ptr, take_ownership_from_abi) {}
        AdjustEventSuccess();
    };
    struct __declspec(empty_bases) AdjustSessionFailure : winrt::AdjustSdk::IAdjustSessionFailureClass
    {
        AdjustSessionFailure(std::nullptr_t) noexcept {}
        AdjustSessionFailure(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustSessionFailureClass(ptr, take_ownership_from_abi) {}
        AdjustSessionFailure();
    };
    struct __declspec(empty_bases) AdjustSessionSuccess : winrt::AdjustSdk::IAdjustSessionSuccessClass
    {
        AdjustSessionSuccess(std::nullptr_t) noexcept {}
        AdjustSessionSuccess(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IAdjustSessionSuccessClass(ptr, take_ownership_from_abi) {}
        AdjustSessionSuccess();
    };
    struct __declspec(empty_bases) Example : winrt::AdjustSdk::IExampleClass
    {
        Example(std::nullptr_t) noexcept {}
        Example(void* ptr, take_ownership_from_abi_t) noexcept : winrt::AdjustSdk::IExampleClass(ptr, take_ownership_from_abi) {}
        Example();
        static auto SayHello();
    };
}
#endif
