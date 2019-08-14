float valeurA;
float valeurB;
void setup(){ 
   pinMode(A0,INPUT);
   pinMode(5, OUTPUT); 
   pinMode(6, OUTPUT); 
   pinMode(7, OUTPUT); 
   pinMode(8, OUTPUT); 
   pinMode(9, OUTPUT); 
   pinMode(10, OUTPUT); 
   pinMode(11, OUTPUT); 
   pinMode(0, OUTPUT); 
   pinMode(1, OUTPUT); 
   pinMode(2, OUTPUT); 
   pinMode(3, OUTPUT); 
   pinMode(4, OUTPUT); 
   pinMode(12, OUTPUT); 
   pinMode(13, OUTPUT); 
} 

void loop() {
  valeurA=analogRead(A1);
  valeurB=valeurA/204.7619047619048;
  if(valeurB>=0&&valeurB<=0.41){
           digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9, HIGH); 
           digitalWrite(10, HIGH); 
           digitalWrite(11,LOW);
           digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
                
  }
  else if(valeurB>0.41&&valeurB<=0.84){
           digitalWrite(5,LOW);
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, LOW); 
           digitalWrite(9, LOW); 
           digitalWrite(10,LOW); 
           digitalWrite(11,LOW);
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
                  
  }
  else if(valeurB>0.84&&valeurB<=1.25){
           digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH);
           digitalWrite(7,LOW); 
           digitalWrite(8, HIGH); 
           digitalWrite(9, HIGH); 
           digitalWrite(10,LOW);
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
                 
  }
  else if(valeurB>1.25&&valeurB<=1.66){
           digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9,LOW);
           digitalWrite(10,LOW);
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>1.66&&valeurB<=2.07){
           digitalWrite(5,LOW);
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8,LOW);
           digitalWrite(9,LOW);
           digitalWrite(10, HIGH); 
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>2.07&&valeurB<=2.48){
           digitalWrite(5, HIGH); 
           digitalWrite(6,LOW);
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9,LOW);
           digitalWrite(10, HIGH); 
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>2.48&&valeurB<=2.89){
           digitalWrite(5, HIGH); 
           digitalWrite(6,LOW);
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9, HIGH); 
           digitalWrite(10, HIGH); 
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>2.89&&valeurB<=3.3){
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(5, HIGH);
           digitalWrite(8,LOW);
           digitalWrite(9,LOW);
           digitalWrite(10,LOW);
           digitalWrite(11,LOW); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>3.3&&valeurB<=3.71){
           digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9, HIGH); 
           digitalWrite(10, HIGH); 
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>3.71&&valeurB<=4.12){
           digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9,LOW);
           digitalWrite(10, HIGH); 
           digitalWrite(11, HIGH); 
                      digitalWrite(13,LOW);
           digitalWrite(12,LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else if(valeurB>4.12&&valeurB<=4.53){
    digitalWrite(5, HIGH); 
           digitalWrite(6, HIGH); 
           digitalWrite(7, HIGH); 
           digitalWrite(8, HIGH); 
           digitalWrite(9, HIGH); 
           digitalWrite(10, HIGH); 
           digitalWrite(11,LOW);
           digitalWrite(13,LOW);
           digitalWrite(12, HIGH); 
           digitalWrite(4, HIGH); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
  }
  else{
    digitalWrite(5, LOW); 
           digitalWrite(6, LOW); 
           digitalWrite(7, LOW); 
           digitalWrite(8, LOW); 
           digitalWrite(9, LOW); 
           digitalWrite(10, LOW); 
           digitalWrite(11,LOW);
           digitalWrite(13,LOW);
           digitalWrite(12, LOW); 
           digitalWrite(4, LOW); 
           digitalWrite(3, LOW); 
           digitalWrite(2, LOW); 
           digitalWrite(1,LOW); 
           digitalWrite(0,LOW);
    
       }

      
}
