#include "U8glib.h"  //加载显示库文件
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0); 
// I2C / TWI 实例化

void setup() {
}
 
void loop() {
  for(int i=1;i<101;i++){
     u8g.firstPage();  
  do {
//显示实现部分
     u8g.setFont(u8g_font_fub14);
     //设置字体和自号，目前测试字号有fub14,17,20,30
     u8g.setPrintPos(50, 50); //显示的位置
     u8g.print(i);//显示变量i的值
     u8g.setFont(u8g_font_fub14);//设置字体和自号
     u8g.setPrintPos(95, 50); //显示的位置
     u8g.print("cm");//显示cm字样
  } 
  while( u8g.nextPage() );
  delay(100);//显示的时间间隔。 
 }
}
