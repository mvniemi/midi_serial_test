//Midi serial message test
//Michael Niemi, https://github.com/mvniemi/midi_guitar

#define VELOCITY 100
#define noteON 145
#define noteOFF 129


//
void setup() {
   //Serial to send midi commands over
  Serial.begin(115200);
}

void loop() {
        delay(500);
        MIDImessage(noteON, (30), VELOCITY);
        delay(500);
        MIDImessage(noteOFF, (30), VELOCITY);
    }


void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
  Serial.write(command);//send note on or note off command 
  Serial.write(MIDInote);//send pitch data
  Serial.write(MIDIvelocity);//send velocity data
}



