
// an project done by Glen p yeldho 
// for more info and updates  https://www.facebook.com/glenp.yeldho

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
int letterSpace;
int dotTime;
void setup()
{
  // setting the ports of the leds to OUTPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
 
  // defining the space between the letters (ms)
  letterSpace = 26;
  // defining the time dots appear (ms)
  dotTime = 15;
}
void printLetter(int letter[])
{
  int y;

 // printing the sspace between the letters
  for (y=0; y<5; y++)
  {
    digitalWrite(8-(y+2), 1);
  }
  delay(letterSpace);
  
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
  delay(letterSpace);
}
void loop()
{
  // you can print your own text by modifing here :) 
  printLetter(C);
  //printLetter(N);
  //printLetter(_);
  
}
 
