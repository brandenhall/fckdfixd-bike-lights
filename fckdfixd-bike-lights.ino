#include "FastLED.h"                                          // FastLED library.
 
#if FASTLED_VERSION < 3001000
#error "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define LED_PIN 2
#define COLOR_ORDER GRB
#define LED_TYPE WS2812
#define NUM_LEDS 13

uint8_t maxBright = 128;
struct CRGB leds[NUM_LEDS];
uint8_t fade = 50;

void setup() {
  delay(1000);  // Startup delay
  LEDS.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(maxBright);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
}

void loop () {
  uint8_t alpha = beatsin8(31, 0, NUM_LEDS - 1);
  uint8_t beta = beatsin8(27, 0, NUM_LEDS - 1);

  leds[alpha] = CRGB::Green;
  leds[beta] = CRGB::Blue;

  FastLED.show();
  fadeToBlackBy(leds, NUM_LEDS, fade);

  FastLED.delay(1000/60);
}
