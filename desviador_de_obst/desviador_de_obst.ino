#define PIN_ECHO 13
#define PIN_TRIGGER = 12

#define MOTOR1 = 2
#define MOTOR2 = 3
#define MOTOR3 = 4
#define MOTOR4 = 5
#define DIS_SEGURA = 25
#define PAUSA = 100

int lerDistancia(void);
void moverFrente(void);
void moveTras(void);
void parar(void);

void setup() {
  pinMode(PIN_ECHO, INPUT);
  pinMode(PIN_TRIGGER, OUTPUT);
  digitalWrite(PIN_TRIGGER, LOW);

  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);
  pinMode(MOTOR3, OUTPUT);
  pinMode(MOTOR4, OUTPUT);
  parar();
}

void loop() { 
  int distancia = lerDistancia();
  if (distancia < DIS_SEGURA){
    parar();
    delay(500);
    
    mover_tras();

    delay(1000);
    parar();

    bool par = (millis() % 2) == 0
    if (par) {
      digitalWrite(MOTOR1, HIGH);
      digitalWrite(MOTOR2, LOW);
    }else {
      digitalWrite(MOTOR3, HIGH);
      digitalWrite(MOTOR4, LOW);
    }
  }else {
    moverFrente();
  }
  delay(PAUSA);
}

int lerDistancia(void) {
  digitalWrie(PINO_TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(PINO_TRIGGEr, LOW);

  return pulseIn(PINO_SENSOR_ECHO) / 58;
}
void moverFrente(void){
  digitalWrite(MOTOR1, HIGH);
  digitalWrite(MOTOR2, LOW);
  digitalWrite(MOTOR3, HIGH);
  digitalWrite(MOTOR4, LOW);
}
void moverTras(void){
  digitalWrite(MOTOR1, LOW);
  digitalWrite(MOTOR2, HIGH);
  digitalWrite(MOTOR3, LOW);
  digitalWrite(MOTOR4, HIGH);
}
void parar(){
  digitalWrite(MOTOR1, LOW);
  digitalWrite(MOTOR2, LOW);
  digitalWrite(MOTOR3, LOW);
  digitalWrite(MOTOR4, LOW);
}
