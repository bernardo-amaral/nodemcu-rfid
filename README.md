# INSTALANDO O NODEMCU

- Baixe o driver pro seu sistema operacional no repositório: https://github.com/nodemcu/nodemcu-devkit/tree/master/Drivers
- Baixe o UART Bridge para realizar a comunicação com o nodeMCU: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
###### (Só funcionou após a instalação deste segundo)

# Configuração da IDE do Arduino para o NodeMCU
###### (Texto extraído do [Blog do FelipeFlop](https://www.filipeflop.com/blog/programar-nodemcu-com-ide-arduino/))

Entre na IDE do Arduino e clicar em Arquivo -> Preferências:

![Arduino](https://www.filipeflop.com/wp-content/uploads/2016/05/IDE-Arquivo.png)

Na tela seguinte, digite o link abaixo no campo URLs adicionais de Gerenciadores de Placas:

http://arduino.esp8266.com/stable/package_esp8266com_index.json

A sua tela ficará assim:

![Preferências](https://www.filipeflop.com/wp-content/uploads/2016/05/IDE-Preferencias.png)

Clique em OK para retornar à tela principal da IDE

Agora clique em Ferramentas -> Placa -> Gerenciador de Placas:

![Placa](https://www.filipeflop.com/wp-content/uploads/2016/05/IDE-Menu-Ferramentas-Placa.png)

Utilize a barra de rolagem para encontrar o esp8266 by ESP8266 Community e clique em INSTALAR

![Gerenciador](https://www.filipeflop.com/wp-content/uploads/2016/05/IDE-Gerenciador-de-placas.png)

Após alguns minutos as placas da linha ESP8266 já estarão disponíveis na lista de placas da IDE do Arduino.

No menu Ferramentas -> Placas, selecione a placa NodeMCU 1.0 (ESP 12-E module)

![Seleção Placa](https://www.filipeflop.com/wp-content/uploads/2016/05/IDE-Selecao-Placa.png)

Transfira o programa normalmente para o NodeMCU, do mesmo jeito que você faz com as outras placas Arduino.

No menu da IDE, em Arquivo -> Exemplos, serão adicionados vários exemplos de uso das placas ESP8266, como webserver, httpclient e DNS, entre outros.

# MÓDULO RFID

- Baixe a biblioteca [AQUI](https://github.com/miguelbalboa/rfid)
- Coloque-a dentro do diretório de bibliotecas do Arduino, e reinicie a IDE
- Conecte o módulo RFID RF522 ao Arduino seguindo o esquema abaixo:

![Schematic](https://raw.githubusercontent.com/bernardo-amaral/nodemcu-rfid/master/schematic.png)

- Suba o código para a placa, e visualize os resultados no monitor serial.
 ###### Para mais detalhes, veja o tutorial na integra em: [MFRC522 RFID Reader Interfaced With NodeMCU](http://www.instructables.com/id/MFRC522-RFID-Reader-Interfaced-With-NodeMCU/)