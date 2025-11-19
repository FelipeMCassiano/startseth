#define M1 9
#define M2 11
#define dir1 8
#define dir2 10

#define pin_S1 7
#define pin_S2 6

bool Sensor1 = 0;
bool Sensor2 = 0;

int velocidade = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);

  pinMode(pin_S1, INPUT);
  pinMode(pin_S2, INPUT);

}

void loop() {
    Sensor1 = digitalRead(pin_S1);
    Sensor2 = digitalRead(pin_S2);

    if (Sensor1 == 0 && Sensor2 == 0){
      analogWrite(M1, velocidade);
      analogWrite(M2, velocidade);
    }else if (Sensor1 == 1 && Sensor2 == 0){
      analogWrite(M1, 0);
      analogWrite(M2, velocidade);
    }else if (Sensor1 == 0 && Sensor2 == 1){
      analogWrite(M1, velocidade);
      analogWrite(M2, 0);
    }else if (Sensor1 == 1 && Sensor2 == 1){
      analogWrite(M1,0);
      analogWrite(M2, 0)

    }

}
