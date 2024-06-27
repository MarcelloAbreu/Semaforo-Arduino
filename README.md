# Projeto de Semáforo com Arduino

## Descrição
Este projeto implementa um semáforo utilizando um Arduino e três LEDs (vermelho, amarelo e verde). O semáforo segue uma sequência simples para controlar o tráfego de veículos, demonstrando como usar saídas digitais para controlar LEDs.

## Componentes Utilizados
- Arduino Uno (ou outra placa compatível)
- LED Vermelho
- LED Amarelo
- LED Verde
- Resistores (recomendados 220Ω)
- Jumpers
- Protoboard

## Funcionamento
1. **Configuração Inicial:**
   - No `setup()`, os pinos digitais do Arduino são configurados como saídas para controlar os LEDs.
2. **Sequência de Operação:**
   - O LED vermelho acende por 5 segundos, indicando parada.
   - O LED verde acende por 5 segundos, permitindo a passagem.
   - O LED amarelo acende por 2 segundos, indicando atenção para a troca de estado.

## Como Usar
1. Conecte os LEDs e resistores conforme o esquema de ligação fornecido.
2. Faça o upload do código para o Arduino usando a IDE Arduino.
3. Observe a sequência de funcionamento do semáforo.

## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir um issue ou enviar um pull request.
