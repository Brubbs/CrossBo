#include "config.h"
#include "funcMotor.h"
#include "funcSensor.h"
/**
  Função para verificar se os sensores acharam borda.
*/
boolean achouBorda() {
  //Inicializa variável de retorno.
  boolean result = true;
  //Obtém a leitura dos sensores.
  valorBorda = verificaBorda();
  //Se o sensor de trás foi acionado.
  if (valorBorda < 0) {
    //Anda pra frente
    avancar(255);
    //Se o sensor da frente foi acionado.
  } else if (valorBorda > 0) {
    //Anda pra trás.
    recuar(255);
  }
  //Caso nenhum dos sensores tenha sido acionado.
  else {
    //Atualiza variável de retorno.
    result = false;
  }
  return result;
}

/**
   Função para verificar se os sensores de inmigo detectou algo.
*/
boolean achouInimigo() {
  valorPresenca = verificaPresenca();

  boolean result = true;

  if(valorPresenca == 100){
    avancar(255);
  }
  else if(valorPresenca < 100){
    girarPraDireita(255);
  }
  if(valorPresenca > 100){
    girarPraEsquerda(255);
  }
  if(valorPresenca == 0){
    result = false;
  }


  // termine esse codigo
  return result;
}
 * Verifica os sensores de presença (inimigo).
 * Possíveis valores de retorno:
 * = 100: Inimigo �  frente.
 * > 100: Inimigo �  direita.
 * < 100: Inimigo �  esquerda.
 * = 0 : Inimigo não encontrado.
 *

/**
 * Funcao para rodar todo o funcionamento do sistema.
 */
void Main(){

  if (!achouBorda()) {

    if (!achouInimigo()) {

      if (valorPresenca>100)) {

        girarPraDireita(150);
      }

      else{

        girarPraEsquerda(150);
      }
    }
  }
}
