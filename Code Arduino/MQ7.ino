
// This sensor can detect smoke, methane, carbon dioxide and other gases CO

#define sensorPin 0  

void setup() {
  Serial.begin(9600);  // Start serial for output
}
  
//VARIABLES
// CO
float Ro = 10000.0;    // this has to be tuned 10K Ohm
int val = 0;        // variable to store the value coming from the sensor
float Vrl = 0.0;
float Rs = 0.0;
float ratio = 0.0;

// get CO ppm

float get_CO (float ratio){
  float ppm = 0.0;
  ppm = 37143 * pow (ratio, -3.178);
  return ppm;
}

float GETCO(){
  val = analogRead(sensorPin);     // read the value from the analog sensor
  Vrl = val * ( 5.00 / 1024.0  );      // V
  Rs = 20000 * ( 5.00 - Vrl) / Vrl ;   // Ohm 
  ratio =  Rs/Ro;                      
  return ratio;
}

void loop() {
  Serial.println(get_CO(GETCO()));
}
