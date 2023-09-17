# Projeto CleanWave

## Visão Geral

Este projeto simula o funcionamento de um vaso sanitário inteligente usando o Tinkercad e um Arduino. O sistema é capaz de verificar o estado da tampa do vaso sanitário (aberta ou fechada) com base na luminosidade ambiente e realizar ações correspondentes, como acender LEDs, ativar um motor para abrir a tampa e emitir mensagens em um display. O objetivo é demonstrar um exemplo simples de automação residencial usando IoT.

## Arquitetura Proposta

A arquitetura da solução IoT consiste nos seguintes componentes:

### Dispositivos IoT:

- Arduino Uno: Controla todo o sistema e se comunica com os sensores e atuadores.
- Sensor de Luminosidade: Detecta a quantidade de luz para determinar o estado da tampa.
- LED Vermelho e LED Verde: Indicam o estado do sistema.
- Relé e Motor Simulado: Controlam a abertura da tampa.
- Display LCD: Exibe mensagens do sistema.
- Buzzer: Emite sons quando necessário.

### Back-End (Não aplicável ao Tinkercad):

Em um ambiente de implementação real, você pode conectar o Arduino a um back-end para monitorar e controlar o sistema remotamente. Você pode usar uma plataforma IoT como o AWS IoT ou o Azure IoT Hub para essa finalidade.

### Front-End (Não aplicável ao Tinkercad):

Um aplicativo ou interface web pode ser desenvolvido para permitir que os usuários monitorem e controlem o vaso sanitário inteligente a partir de seus dispositivos móveis ou computadores.

## Recursos Necessários

Para implementar este projeto, você precisará dos seguintes recursos:

### Dispositivos e Componentes Eletrônicos:

- Arduino Uno (ou similar).
- Sensor de Luminosidade (LDR).
- LEDs Vermelho e Verde.
- Relé e Motor Simulado.
- Display LCD 16x2.
- Buzzer.
- Protoboard e cabos jumper.
- Resistor de 10k ohms (para o LDR).
- Resistores de 220 ohms (para os LEDs).

### Software e Ferramentas:

- Arduino IDE (para programação do Arduino).
- Tinkercad (para simulação).
- Conhecimento em programação Arduino.

## Instruções de Uso

1. Abra o projeto no Tinkercad.
2. Conecte os componentes eletrônicos conforme o esquema de conexão.
3. Carregue o código-fonte fornecido para o Arduino.
4. Inicie a simulação no Tinkercad.
5. Observe o funcionamento do sistema no ambiente de simulação.

## Requisitos

- Arduino IDE instalado.
- Conta no Tinkercad (para a simulação).

## Dependências

Este projeto não possui dependências externas, além das bibliotecas padrão do Arduino.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues, propor melhorias ou enviar pull requests.

## Licença

Este projeto é licenciado sob a [Licença MIT](LICENSE.md).

## Contato

Para mais informações ou dúvidas, entre em contato:

- Seu Nome: [Seu Email]

---
**Nota:** Lembre-se de substituir `[Seu Nome]` e `[Seu Email]` pelas suas informações de contato reais.

Este README fornece uma visão geral do projeto, detalhes da arquitetura proposta, recursos necessários, instruções de uso, requisitos, dependências e informações relevantes. Certifique-se de atualizar as informações conforme necessário para refletir com precisão o seu projeto específico.
