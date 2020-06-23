//Tijd variabele
unsigned long _time;
unsigned long _deltaTime;

//Timer variabele
int _timerDuration = 5000; //In milli seconden (5 seconden).
int _currentTimerDuration;

void setup() {
  _currentTimerDuration = _timerDuration;
}

void loop() {
  UpdateTime();

  //Timer
  _currentTimerDuration -= _deltaTime;
  if(_currentTimerDuration <= 0){
    //TODO: timer is afgelopen doe u stuff.
  }
}

void UpdateTime(){
  _deltaTime = millis() - _time;
  _time = millis();
}
