using System.Collections.Generic;

namespace AdjustSdk
{
    sealed public class AdjustEventSuccess
    {
        public string Message { get; set; }
        public string Timestamp { get; set; }
        public string Adid { get; set; }
        public string EventToken { get; set; }
        public string CallbackId { get; set; }

        private Dictionary<string, string> _jsonResponse;
        public IReadOnlyDictionary<string, string> JsonResponse
        {
            get => _jsonResponse;
            set { _jsonResponse = (Dictionary<string, string>)value; }
        }

        public override string ToString()
        {
            return Pcl.Util.F("Event Success msg:{0} time:{1} adid:{2} event:{3} cid:{4} json:{5}",
                Message,
                Timestamp,
                Adid,
                EventToken,
                CallbackId,
                JsonResponse);
        }
    }
}
