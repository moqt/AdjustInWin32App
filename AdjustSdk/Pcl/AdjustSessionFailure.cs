using System.Collections.Generic;

namespace AdjustSdk
{
    sealed public class AdjustSessionFailure
    {
        public string Message { get; set; }
        public string Timestamp { get; set; }
        public string Adid { get; set; }
        public bool WillRetry { get; set; }

        private Dictionary<string, string> _jsonResponse;
        public IReadOnlyDictionary<string, string> JsonResponse
        {
            get => _jsonResponse;
            set { _jsonResponse = (Dictionary<string, string>)value; }
        }

        public override string ToString()
        {
            return Pcl.Util.F("Session Failure msg:{0} time:{1} adid:{2} retry:{3} json:{4}",
                Message,
                Timestamp,
                Adid,
                WillRetry,
                JsonResponse);
        }
    }
}
