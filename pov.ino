
// an project done by Glen p yeldho 
// for more info and updates  https://www.facebook.com/glenp.yeldho
#include <math.h>
int _[] = {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
int A[] = {0,1,1,1,1, 1,0,1,0,0, 0,1,1,1,1};
int A_[] = {1,0,0,0,0, 1,0,0,0,0, 1,0,0,0,0};
int B[] = {1,1,1,1,1, 1,0,1,0,1, 0,1,0,1,0};
int C[] = {0,1,1,1,0, 1,0,0,0,1, 1,0,0,0,1};
int D[] = {1,1,1,1,1, 1,0,0,0,1, 0,1,1,1,0};
int E[] = {1,1,1,1,1, 1,0,1,0,1, 1,0,1,0,1};
int F[] = {1,1,1,1,1, 1,0,1,0,0, 1,0,1,0,0};
int G[] = {0,1,1,1,0, 1,0,1,0,1, 0,0,1,1,0};
int H[] = {1,1,1,1,1, 0,0,1,0,0, 1,1,1,1,1};
int I[] = {0,0,0,0,1, 1,0,1,1,1, 0,0,0,0,1};
int J[] = {1,0,0,0,0, 1,0,0,0,1, 1,1,1,1,1};
int K[] = {1,1,1,1,1, 0,0,1,0,0, 0,1,0,1,1};
int L[] = {1,1,1,1,1, 0,0,0,0,1, 0,0,0,0,1};
int M[] = {1,1,1,1,1, 0,1,1,0,0, 0,1,1,1,1};
int N[] = {1,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1};
int O[] = {0,1,1,1,0, 1,0,0,0,1, 0,1,1,1,0};
int P[] = {1,1,1,1,1, 1,0,1,0,0, 0,1,0,0,0};
int Q[] = {0,1,1,1,1, 1,0,0,1,1, 0,1,1,1,1};
int R[] = {1,1,1,1,1, 1,0,1,0,0, 0,1,0,1,1};
int S[] = {0,1,0,0,1, 1,0,1,0,1, 1,0,0,1,0};
int T[] = {1,0,0,0,0, 1,1,1,1,1, 1,0,0,0,0};
int U[] = {1,1,1,1,1, 0,0,0,0,1, 1,1,1,1,1};
int V[] = {1,1,1,1,0, 0,0,0,0,1, 1,1,1,1,0};
int W[] = {1,1,1,1,0, 0,0,1,1,0, 1,1,1,1,0};
int X[] = {1,1,0,1,1, 0,0,1,0,0, 1,1,0,1,1};
int Y[] = {1,1,0,0,0, 0,0,1,0,0, 1,1,1,1,1};
int Z[] = {1,0,0,1,1, 1,0,1,0,1, 1,1,0,0,1};
int TT[] = {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
int AS[][15] = {{0,1,1,1,1, 1,0,1,0,0, 0,1,1,1,1},{1,1,1,1,1, 1,0,1,0,1, 0,1,0,1,0},{0,1,1,1,0, 1,0,0,0,1, 1,0,0,0,1},
                  {1,1,1,1,1, 1,0,0,0,1, 0,1,1,1,0},{1,1,1,1,1, 1,0,1,0,1, 1,0,1,0,1},{1,1,1,1,1, 1,0,1,0,0, 1,0,1,0,0},
                  {0,1,1,1,0, 1,0,1,0,1, 0,0,1,1,0},{1,1,1,1,1, 0,0,1,0,0, 1,1,1,1,1},{0,0,0,0,1, 1,0,1,1,1, 0,0,0,0,1},
                  {1,0,0,0,0, 1,0,0,0,1, 1,1,1,1,1},{1,1,1,1,1, 0,0,1,0,0, 0,1,0,1,1},{1,1,1,1,1, 0,0,0,0,1, 0,0,0,0,1},
                  {1,1,1,1,1, 0,1,1,0,0, 0,1,1,1,1},{1,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1},{0,1,1,1,0, 1,0,0,0,1, 0,1,1,1,0},
                  {1,1,1,1,1, 1,0,1,0,0, 0,1,0,0,0},{0,1,1,1,1, 1,0,0,1,1, 0,1,1,1,1},{1,1,1,1,1, 1,0,1,0,0, 0,1,0,1,1},
                  {0,1,0,0,1, 1,0,1,0,1, 1,0,0,1,0},{1,0,0,0,0, 1,1,1,1,1, 1,0,0,0,0},{1,1,1,1,1, 0,0,0,0,1, 1,1,1,1,1},
                  {1,1,1,1,0, 0,0,0,0,1, 1,1,1,1,0},{1,1,1,1,0, 0,0,1,1,0, 1,1,1,1,0},{1,1,0,1,1, 0,0,1,0,0, 1,1,0,1,1},
                  {1,1,0,0,0, 0,0,1,0,0, 1,1,1,1,1},{1,0,0,1,1, 1,0,1,0,1, 1,1,0,0,1}};

float v = 1/0;  //round per minute
const int echo = 9;        // 反馈信号
int letterSpace;
int dotTime;
float k = 0.62; // right -> increase
float period = 0;
bool flag = 1;
int n_lett = 2; // how many letters
int n_mirr = 6;
void setup()
{
  // setting the ports of the leds to OUTPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(echo, INPUT);
  //反馈端口设置为输入
  Serial.begin(9600);
  // defining the space between the letters (ms)

}

void checkv(void){
    long IntervalTime=0; //定义一个时间变量
    long t2 = 0;
    IntervalTime=pulseIn(echo, HIGH);//用自带的函数采样反馈的高电平的宽度，单位ms，电机模块有个圆盘，盘上有4个条形孔
    
    t2 = pulseIn(echo,HIGH);
    IntervalTime = IntervalTime + t2;
    v=30000000.0/IntervalTime; //使用浮点计算出r/min
}

void printLetter(int letter[])
{
  int y;
  
  // printing the first y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(8-(y+2), 1-letter[y+10]);
  }
  delay(dotTime);
 
  // printing the second y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(8-(y+2), 1-letter[y+5]);
  }
  delay(dotTime);
 
  // printing the third y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(8-(y+2), 1-letter[y]);
  }
  delay(dotTime);
 
  // printing the sspace between the letters
  for (y=0; y<5; y++)
  {
    digitalWrite(8-(y+2), 1);
  }
  delay(0.3*letterSpace);
}
void loop()
{
  delay(2000);
  while (isinf(v) || v==-1)
    {
      delay(1000);
      checkv();
    }
  int i;
  //v : round / min
  // time: ms
  // time per round: 
  period = 60000/v*k/n_mirr/n_lett;
  letterSpace = 1.0/4.0*period; //1 letterSpace
  dotTime = (period-letterSpace)/3;     //3 dotTime
  Serial.println(v);
  Serial.println(letterSpace);
  Serial.println(dotTime);
  int k = 0;
  int ind = 0;
  while(true){
    //input is HIGH when across nothing. LOW when across the stick.
    
    flag = digitalRead(echo);
    if (flag == 0)
    {
      k = k + 1;
      if (k==10)
      {
        k=0;
        
        ind = ind + 1;
        if (ind==26)
          ind = 0;
      }

      printLetter(_);
      printLetter(AS[ind]);

      

    }
  }
  
}
 
