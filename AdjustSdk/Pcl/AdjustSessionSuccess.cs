using System.Collections.Generic;

namespace AdjustSdk
{
    sealed public class AdjustSessionSuccess
    {
        public string Message { get; set; }
        public string Timestamp { get; set; }
        public string Adid { get; set; }

        private Dictionary<string, string> _jsonResponse;
        public IReadOnlyDictionary<string, string> JsonResponse 
        { 
            get => _jsonResponse;
            set { _jsonResponse = (Dictionary<string, string>)value; }
        }

        public override string ToString()
        {
            return Pcl.Util.F("Session Success msg:{0} time:{1} adid:{2} json:{3}",
                Message,
                Timestamp,
                Adid,
                JsonResponse);
        }
    }
}
