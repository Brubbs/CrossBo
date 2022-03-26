/**
 * FunÃ§ÃĢo para avanÃ§ar ou recuar, passando a potÃŠncia e o sentido do motor.
 * Analizar como vai funcionar a ponte H para determinar como fazer pra ele recuar se for preciso.
 */
void andar(int pot, bool frente){
  if(!frente){
    pot *= -1;
  }
  digitalWrite(PORTAMOTOR1, pot);
  digitalWrite(PORTAMOTOR2, pot);
}

/**
 * FunÃ§ao para girar, passando as potÃŠncias para o motor.
 */
void girar(int pot1, int pot2){
  digitalWrite(PORTAMOTOR1, pot1);
  digitalWrite(PORTAMOTOR2, pot2);
}

/**
 * Funcao para girar pra direita.
 * Possivelmente dÃĄ pra melhorar passando por parÃĒmetro a potÃŠncia para o segundo motor.
 */
void girarPraDireita(int pot){
  girar(10, pot);


}

/**
 * Funcao para girar pra esquerda.
 * Possivelmente dÃĄ pra melhorar passando por parÃĒmetro a potÃŠncia para o segundo motor.
 */
void girarPraEsquerda(int pot){
  girar(pot, 10);
}

/**
 * FunÃ§ÃĢo para avanÃ§ar, passando apenas a potÃncia do motor.
 */
void avancar(int pot){
  andar(pot, true);
}

/*
 * FunÃ§ÃĢo para recuar, passando apenas a potÃŠncia do motor.
 */
void recuar(int pot){
  andar(pot, false);
}
/**
 * FunÃ§ÃĢo para parar.
 */
void parar(){
  avancar(0);
}
