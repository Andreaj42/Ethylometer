const int mq3Pin = 35;
//const int LED = 34;

void sort(float tab[]) {
  float temp;
  for (int i = 0; i < 18; i++) {
    for (int j = i + 1; j < 19; j++) {
      if (tab[j] < tab[i]) {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
    }
  }
}


void setup() {
  Serial.begin(9600);
  pinMode(mq3Pin, INPUT);
  //pinMode(LED, OUTPUT);
  Serial.println("Breathalyzer running");
}



void loop() {
  float tab[19] = {};
  for (int i = 0; i < 19; i++) {
    tab[i] = analogRead(mq3Pin);
    delay(25);
  }
  sort(tab);
  Serial.print("0");
  Serial.print(" ");
  Serial.print("4095");
  Serial.print(" ");
  Serial.println(tab[10]);
}
