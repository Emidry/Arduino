/*
 * 功能描述：ESP8266 PWM演示例程
 * @author 单片机菜鸟
 * @date 2018/10/25
 */

//#define PIN_LED D4
int PIN_LED = 2;  //GPIO2<-->D4

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  analogWrite(PIN_LED, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int val=0; val<1024; val++){
    //占空比不断增大 亮度渐亮
    analogWrite(PIN_LED, val);
    delay(2);
  }

  for(int val=1023; val>=0; val--){
    analogWrite(PIN_LED, val);
    delay(2);  
  }
}
