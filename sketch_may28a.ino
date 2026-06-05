int LDR = A1;
int LED = 13;

void setup() {
  // Membuka komunikasi serial
  Serial.begin(9600);

  // Inisialisasi pin
  pinMode (LDR, INPUT);
  pinMode (LED, OUTPUT);

}

void loop() {
  // Membaaca nilai sensor LDR
  int ldrStatus = analogRead(LDR);

  // Kondisi gelap
  if (ldrStatus <= 200){

    digitalWrite(LED, HIGH);

    Serial.print("Gelap, LED Hidup, Jokowi! : ");
    Serial.println(ldrStatus);
    
  }

  // Kondisi terang
  else {
    
    digitalWrite(LED, LOW);

    Serial.print("Terang, LED Mati : ");
    Serial.println(ldrStatus);
    }
}
