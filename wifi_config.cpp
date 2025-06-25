#include "myconfig.h"

// List of WiFi networks. First one is used for AP mode if enabled
station stationList[] = {
    {"FPV-CAM", "Tarik123cam", true}  // AP mode credentials
    // Add more WiFi networks here if needed:
    // {"your_wifi_ssid", "your_wifi_password", true},
}; 

// Number of networks in stationList
const int STATION_COUNT = sizeof(stationList) / sizeof(stationList[0]); 