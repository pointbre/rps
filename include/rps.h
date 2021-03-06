#ifndef _RPS_H
#define _RPS_H
#include <Arduino.h>
#include <LoRaLib.h>
#include <SSD1306Wire.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ArduinoJson.h>
#include <EEPROM.h>
#include <ESPmDNS.h>
#include <EOTAUpdate.h>
#include "version.h"
#include "cfg.h"
#include "lrs.h"
#include "pocsag.h"

//#define USE_QUEUE 
//#define DEBUG

#define OLED_ADDRESS 0x3c
#define OLED_SDA 4  // GPIO4
#define OLED_SCL 15 // GPIO15
#define OLED_RST 16 // GPIO16

#define LoRa_RST 14  // GPIO 14
#define LoRa_CS 18   // GPIO 18
#define LoRa_DIO0 26 // GPIO 26
#define LoRa_DIO1 33 // GPIO 33 (Heltec v2: GPIO 35)
#define LoRa_DIO2 32 // GPIO 32 (Heltec v2: GPIO 34 has to be conected to GPIO 32)

typedef struct {
  int restaurant_id; 
  int system_id; 
  int pager_number; 
  int alert_type;
} pager_t;

extern SX1278 fsk;
extern settings_t cfg;
extern const uint8_t data_index_html_start[] asm("_binary_data_index_html_start");
extern const uint8_t data_index_html_end[] asm("_binary_data_index_html_end");
extern const uint8_t data_script_js_start[] asm("_binary_data_script_js_start");
extern const uint8_t data_script_js_end[] asm("_binary_data_script_js_end");

#endif