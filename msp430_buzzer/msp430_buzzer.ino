/*
  piezo buzzer test
  6/17/13
  
  tried to make the imperial march
  8/17/13
*/

int c = 1486.51;
int d = 1668.55;
int e = 1872.88;
int f = 1984.25;
int g = 2227.25;
int gS = 2359.69;
int a = 2500;
int aS = 455;
int b = 2648.66;
int cH = 2973.02;
int cSH = 3149.8;
int dH = 3337.1;
int dSH = 3535.53;
int eH = 3745.77;
int fH = 3968.5;
int fSH = 4204.48;
int gH = 4454.49;
int gSH = 4719.37;
int aH = 5000;

void setup() {
  pinMode(P1_2, OUTPUT);
  pinMode(RED_LED, OUTPUT);  
}

void loop() {
  march();
}

void beep (int frequencyInHertz, long timeInMilliseconds)
{ 
    digitalWrite(RED_LED, HIGH);	 
    //use led to visualize the notes being played
    
    int x; 	 
    long delayAmount = (long)(5000000/frequencyInHertz);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++) 	 
    { 	 
        digitalWrite(P1_2,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(P1_2,LOW);
        delayMicroseconds(delayAmount);
    } 	 
    
    digitalWrite(RED_LED, LOW);
    //set led back to low
    
    delay(20);
    //a little delay to make all notes sound separate
} 	

void march()
{ 	 
    //for the sheet music see:
    //http://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0016254
    //this is just a translation of said sheet music to frequencies / time in ms
    //used 500 ms for a quart note
    
    beep(a, 500); 
    beep(a, 500);     
    beep(a, 500); 
    beep(f, 350); 
    beep(cH, 150);
    
    beep(a, 500);
    beep(f, 350);
    beep(cH, 150);
    beep(a, 1000);
    //first bit
    
    beep(eH, 500);
    beep(eH, 500);
    beep(eH, 500);    
    beep(fH, 350); 
    beep(cH, 150);
    
    beep(gS, 500);
    beep(f, 350);
    beep(cH, 150);
    beep(a, 1000);
    //second bit...
    
    beep(aH, 500);
    beep(a, 350); 
    beep(a, 150);
    beep(aH, 500);
    beep(gSH, 250); 
    beep(gH, 250);
    
    beep(fSH, 125);
    beep(fH, 125);    
    beep(fSH, 250);
    delay(250);
    beep(aS, 250);    
    beep(dSH, 500);  
    beep(dH, 250);  
    beep(cSH, 250);  
    //start of the interesting bit
    
    beep(cH, 125);  
    beep(b, 125);  
    beep(cH, 250);      
    delay(250);
    beep(f, 125);  
    beep(gS, 500);  
    beep(f, 375);  
    beep(a, 125); 
    
    beep(cH, 500); 
    beep(a, 375);  
    beep(cH, 125); 
    beep(eH, 1000); 
    //more interesting stuff (this doesn't quite get it right somehow)
    
    beep(aH, 500);
    beep(a, 350); 
    beep(a, 150);
    beep(aH, 500);
    beep(gSH, 250); 
    beep(gH, 250);
    
    beep(fSH, 125);
    beep(fH, 125);    
    beep(fSH, 250);
    delay(250);
    beep(aS, 250);    
    beep(dSH, 500);  
    beep(dH, 250);  
    beep(cSH, 250);  
    //repeat... repeat
    
    beep(cH, 125);  
    beep(b, 125);  
    beep(cH, 250);      
    delay(250);
    beep(f, 250);  
    beep(gS, 500);  
    beep(f, 375);  
    beep(cH, 125); 
           
    beep(a, 500);            
    beep(f, 375);            
    beep(c, 125);            
    beep(a, 1000);       
    //and we're done \ó/    
}


