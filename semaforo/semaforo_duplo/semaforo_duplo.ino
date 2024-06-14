// Definição dos pinos para os LEDs dos semáforos
int semaforo1Vermelho = 10;
int semaforo1Amarelo = 9;
int semaforo1Verde = 8;

int semaforo2Vermelho = 13;
int semaforo2Amarelo = 12;
int semaforo2Verde = 11;

void setup() {
  // Configuração dos pinos como saídas
  pinMode(semaforo1Vermelho, OUTPUT);
  pinMode(semaforo1Amarelo, OUTPUT);
  pinMode(semaforo1Verde, OUTPUT);

  pinMode(semaforo2Vermelho, OUTPUT);
  pinMode(semaforo2Amarelo, OUTPUT);
  pinMode(semaforo2Verde, OUTPUT);

  // Inicialmente, todos os LEDs apagados
  apagarTodosSemaforos();
}

void loop() {
  // Fase 1: Semáforo 1 Verde, Semáforo 2 Vermelho
  digitalWrite(semaforo1Verde, HIGH);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, LOW);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Amarelo, LOW);
  digitalWrite(semaforo2Vermelho, HIGH);
  delay(8000); // Espera 8 segundos

  // Fase 2: Semáforo 1 Amarelo, Semáforo 2 Vermelho
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, HIGH);
  digitalWrite(semaforo1Vermelho, LOW);
  delay(3000); // Espera 3 segundos

  // Fase 3: Ambos os Semáforos Vermelho
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, HIGH);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Amarelo, LOW);
  digitalWrite(semaforo2Vermelho, HIGH);
  delay(2000); // Espera 2 segundos

  // Fase 4: Semáforo 1 Vermelho, Semáforo 2 Verde
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, HIGH);
  digitalWrite(semaforo2Verde, HIGH);
  digitalWrite(semaforo2Amarelo, LOW);
  digitalWrite(semaforo2Vermelho, LOW);
  delay(8000); // Espera 8 segundos

  // Fase 5: Semáforo 1 Vermelho, Semáforo 2 Amarelo
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, HIGH);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Amarelo, HIGH);
  digitalWrite(semaforo2Vermelho, LOW);
  delay(3000); // Espera 3 segundos

  // Fase 6: Ambos os Semáforos Vermelho
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, HIGH);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Amarelo, LOW);
  digitalWrite(semaforo2Vermelho, HIGH);
  delay(2000); // Espera 2 segundos
}

void apagarTodosSemaforos() {
  digitalWrite(semaforo1Verde, LOW);
  digitalWrite(semaforo1Amarelo, LOW);
  digitalWrite(semaforo1Vermelho, LOW);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Amarelo, LOW);
  digitalWrite(semaforo2Vermelho, LOW);
}
