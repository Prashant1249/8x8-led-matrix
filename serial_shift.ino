const byte IMAGES[][8] = {
  { B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10100101,
    B10011001,
    B01000010,
    B00111100
  },
  {
    B00000000,
    B00111100,
    B01100110,
    B01100110,
    B01111110,
    B01100110,
    B01100110,
    B01100110
  }, {
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01100110,
    B01100110,
    B01111100
  }, {
    B00000000,
    B00111100,
    B01100110,
    B01100000,
    B01100000,
    B01100000,
    B01100110,
    B00111100
  }, {
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01111100
  }, {
    B00000000,
    B01111110,
    B01100000,
    B01100000,
    B01111100,
    B01100000,
    B01100000,
    B01111110
  }, {
    B00000000,
    B01111110,
    B01100000,
    B01100000,
    B01111100,
    B01100000,
    B01100000,
    B01100000
  }, {
    B00000000,
    B00111100,
    B01100110,
    B01100000,
    B01100000,
    B01101110,
    B01100110,
    B00111100
  }, {
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01111110,
    B01100110,
    B01100110,
    B01100110
  }, {
    B00000000,
    B00111100,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00111100
  }, {
    B00000000,
    B00011110,
    B00001100,
    B00001100,
    B00001100,
    B01101100,
    B01101100,
    B00111000
  }, {
    B00000000,
    B01100110,
    B01101100,
    B01111000,
    B01110000,
    B01111000,
    B01101100,
    B01100110
  }, {
    B00000000,
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01111110
  }, {
    B00000000,
    B01100011,
    B01110111,
    B01111111,
    B01101011,
    B01100011,
    B01100011,
    B01100011
  }, {
    B00000000,
    B01100011,
    B01110011,
    B01111011,
    B01101111,
    B01100111,
    B01100011,
    B01100011
  }, {
    B00000000,
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100
  }, {
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01100110,
    B01111100,
    B01100000,
    B01100000
  }, {
    B00000000,
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B01101110,
    B00111100,
    B00000110
  }, {
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01111000,
    B01101100,
    B01100110
  }, {
    B00000000,
    B00111100,
    B01100110,
    B01100000,
    B00111100,
    B00000110,
    B01100110,
    B00111100
  }, {
    B00000000,
    B01111110,
    B01011010,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000
  }, {
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111110
  }, {
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00011000
  }, {
    B00000000,
    B01100011,
    B01100011,
    B01100011,
    B01101011,
    B01111111,
    B01110111,
    B01100011
  }, {
    B00000000,
    B01100011,
    B01100011,
    B00110110,
    B00011100,
    B00110110,
    B01100011,
    B01100011
  }, {
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00011000,
    B00011000,
    B00011000
  }, {
    B00000000,
    B01111110,
    B00000110,
    B00001100,
    B00011000,
    B00110000,
    B01100000,
    B01111110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B00000110,
    B00111110,
    B01100110,
    B00111110
  }, {
    B00000000,
    B01100000,
    B01100000,
    B01100000,
    B01111100,
    B01100110,
    B01100110,
    B01111100
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01100110,
    B01100000,
    B01100110,
    B00111100
  }, {
    B00000000,
    B00000110,
    B00000110,
    B00000110,
    B00111110,
    B01100110,
    B01100110,
    B00111110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01100110,
    B01111110,
    B01100000,
    B00111100
  }, {
    B00000000,
    B00011100,
    B00110110,
    B00110000,
    B00110000,
    B01111100,
    B00110000,
    B00110000
  }, {
    B00000000,
    B00000000,
    B00111110,
    B01100110,
    B01100110,
    B00111110,
    B00000110,
    B00111100
  }, {
    B00000000,
    B01100000,
    B01100000,
    B01100000,
    B01111100,
    B01100110,
    B01100110,
    B01100110
  }, {
    B00000000,
    B00000000,
    B00011000,
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00111100
  }, {
    B00000000,
    B00001100,
    B00000000,
    B00001100,
    B00001100,
    B01101100,
    B01101100,
    B00111000
  }, {
    B00000000,
    B01100000,
    B01100000,
    B01100110,
    B01101100,
    B01111000,
    B01101100,
    B01100110
  }, {
    B00000000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B01110111,
    B01111111,
    B01101011,
    B01101011
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01111100,
    B01111110,
    B01100110,
    B01100110,
    B01100110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B00111100
  }, {
    B00000000,
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01100000,
    B01100000
  }, {
    B00000000,
    B00000000,
    B00111100,
    B01101100,
    B01101100,
    B00111100,
    B00001101,
    B00001111
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01111100,
    B01100110,
    B01100110,
    B01100000,
    B01100000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111110,
    B01000000,
    B00111100,
    B00000010,
    B01111100
  }, {
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B01111110,
    B00011000,
    B00011000,
    B00011000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01100110,
    B01100110,
    B00111100,
    B00011000
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01100011,
    B01101011,
    B01101011,
    B01101011,
    B00111110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01100110,
    B00111100,
    B00011000,
    B00111100,
    B01100110
  }, {
    B00000000,
    B00000000,
    B00000000,
    B01100110,
    B01100110,
    B00111110,
    B00000110,
    B00111100
  }, {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B00001100,
    B00011000,
    B00110000,
    B00111100
  }
};
const int IMAGES_LEN = sizeof(IMAGES) / 8;


uint8_t colPins[8] = { 2, 3, 4, 5, 6, 7, 8, 9};

#define SER_PIN 10
#define SCK_PIN 11
#define RCK_PIN 12

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(colPins[i], OUTPUT);
  }
  pinMode(SER_PIN, OUTPUT);
  pinMode(SCK_PIN, OUTPUT);
  pinMode(RCK_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // iterate each row
  for (int i = 0; i < IMAGES_LEN; i++) {
    for (int j = 0; j < 100; j++) {
      int rowbits = 0x80;
      for (int row = 0; row < 8; row++) {
        for (int k = 0; k < 8; k++)
          digitalWrite(colPins[k], LOW); // Cleanup cols
        writeData(rowbits); // prepare to write the row
        for (int col = 0; col < 8; col++)
          digitalWrite(colPins[7 - col], IMAGES[i][row] & 1 << col ? HIGH : LOW );
        delay(1);
        writeData(0);
        rowbits >>= 1;
      }
    }
  }
}

void writeData(byte data) {
  digitalWrite(RCK_PIN, LOW);
  shiftOut(SER_PIN, SCK_PIN, LSBFIRST, data);
  digitalWrite(RCK_PIN, HIGH);
}
