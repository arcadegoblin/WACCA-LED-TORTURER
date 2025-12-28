#include <FastLED.h>

#define LED_PIN 6
#define NUM_LEDS 9
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  delay(1000);
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(64);

 
  Serial.begin(9600);
  while (!Serial) {}
  Serial.println("=== WACCA LED TORTURER ONLINE ===");
  Serial.println("Status: grumpy but functional");
  Serial.println("Sacrifices accepted: WS2812B");
}

void loop() {

  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show(); delay(800);
  Serial.println("LEDs are angry (Red)");

  fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show(); delay(800);
  Serial.println("LEDs are chill (Green)");

  fill_solid(leds, NUM_LEDS, CRGB::Blue);
  FastLED.show(); delay(800);
  Serial.println("LEDs are sad (Blue)");

  fill_solid(leds, NUM_LEDS, CRGB::White);
  FastLED.show(); delay(1200);
  Serial.println("LEDs are enlightened (White)");

  
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
    delay(150);
    leds[i] = CRGB::Black;

    Serial.print("LED #");
    Serial.print(i + 1);
    Serial.println(" bows to the LED overlord");
  }
}
