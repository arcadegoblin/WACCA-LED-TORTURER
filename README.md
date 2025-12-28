# WACCA-LED-TORTURER
Too poor to order new led strips and needed to diagnose which are broken without connecting them to the whole ring.

It's not super complicated, but helped me to track down which LEDs in Wacca LED PCB were broken, so I could resolder them. 
Made on cheap Leonardo clone from Aliexpress that costs 5$ and whole 3 M-M dupont cables. And one Wacca 3pin cable from leds (so you don't have to solder the cables or cut them).

<img width="1507" height="738" alt="obraz" src="https://github.com/user-attachments/assets/86b7667f-82b8-4f9d-83cf-db5aabedf6b1" />

[Uses FastLED library.](https://github.com/FastLED/FastLED)

Upload this sketch to Arduino Leonardo using Arduino IDE.

The board should send first 4 signals (angery leds are angery) - red/green/blue/white on entire strip and then leds bow in sequence 1-9 to the LED Overlord. 

<img width="346" height="295" alt="obraz" src="https://github.com/user-attachments/assets/d100ceb9-01b4-4a0d-b431-7960f9b0ab44" />

It's very grumpy, but functional.

If that helps anyone - you're welcome and hope your LEDs shine bright ✨
