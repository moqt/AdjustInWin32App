using System;

namespace AdjustSdk.Pcl
{
    static class LogConfig
    {
        static void SetupLogging(Action<string> logDelegate, LogLevel? logLevel = null)
        {
            var logger = AdjustFactory.Logger;
            if (logger.IsLocked) { return; }

            logger.LogDelegate = logDelegate;
            if (logLevel.HasValue)
            {
                logger.LogLevel = logLevel.Value;
            }
        }
    }
}
