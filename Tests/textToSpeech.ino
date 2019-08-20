#include <TTS.h>

int speak = 9;

TTS text2speach(speak);

void setup() {

}

void loop() {

  text2speach.setPitch(5);
  text2speach.sayText("Hello my master!");

  delay(500);

}
