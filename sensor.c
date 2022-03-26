/**
 * Retorna o valor correspondente ao sensor, caso o sensor detecte algo.
 */
int valorPresenca(int sensor) {
  int result = 0;
  if(digitalRead(sensor)){
    result = sensoresPresenca[sensor][1];
  }
  return result;
}

/**
 * Verifica os sensores de presença (inimigo).
 * Possíveis valores de retorno:
 * = 100: Inimigo �  frente.
 * > 100: Inimigo �  direita.
 * < 100: Inimigo �  esquerda.
 * = 0 : Inimigo não encontrado.
 */
int verificaPresenca(){
  int result = 0;
  for (int i = 0; i < 5; i++) {
    result += valorPresenca(sensoresPresenca[i][0]);
  }
  return result;
}


/**
 * Retorna o valor correspondente ao sensor de borda, caso o sensor detecte algo.
 */
int valorBorda(int sensor){
  int result = 0;
  if(digitalRead(sensor)){
    result = sensoresBorda[sensor][1];
  }
  return result;
}

/**
 * Verifica os sensores de borda (segurança).
 * Possíveis valores de retorno:
 * > 0: Borda da frente detectada.
 * < 0: Borda de trás detectada.
 * = 0: Nenhuma borda detectada.
 */
int verificaBorda(){
  int result = 0;
  for(int i = 0; i < 2; i++){
    result += valorBorda(sensoresBorda[i][0]);
  }
  return result;
}
