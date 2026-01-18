#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// Structures section
struct Race {
int numberOfLaps;
int currentLap;
char firstPlaceDriverName[30];
char firstPlaceRaceCarColor[30];
};
struct RaceCar {
  char driverName[30];
  char raceCarColor[30];
  int currentLap;
  int totalLapTime;
};

// Print functions section
void printIntro(){
  printf ("Welcome to our main event digital race fans!\n");
printf("I hope everybody has their snacks because we are about to begin!\n");
};
void printCountDown(){
  printf ("Racer Ready! In\n");
  for (int i=5; i>=1;i--){
    printf ("%d\n", i);
  }
  printf("Race!");
};
void printFirstPlaceAfterLap(struct Race race){
  
  printf("After lap number %d\n", race.currentLap);
  printf ("First Place Is: %s in the %s race car!\n\n"
  ,race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};
void printCongratulation(struct Race race){
printf ("Let's all congratulate %s in the orange race car for an amazing performance.\n", race.firstPlaceDriverName);
printf ("It truly was a great race and everybody have a goodnight!\n");
}

// Logic functions section
int calculateTimeToCompleteLap(){
  int speed;
  int acceleration;
  int nerves;
  speed = ((rand()%3)+1);
  acceleration = ((rand()%3)+1);
  nerves = ((rand()%3)+1);
  return speed + acceleration + nerves;
}
void updateRaceCar(struct RaceCar* raceCar ){
  int lapTime= calculateTimeToCompleteLap();
  raceCar-> totalLapTime+= lapTime;
}
void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime){
    strcpy(race->firstPlaceDriverName, raceCar1->driverName);
    strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
    else {
strcpy(race->firstPlaceDriverName, raceCar2->driverName);
    strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
  
};

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2){
  struct Race race ={5,1,"",""};
  for ( int i=1; i<= race.numberOfLaps; i++){
  updateRaceCar(raceCar1);
  updateRaceCar(raceCar2);
  race.currentLap=i;
  updateFirstPlace(&race, raceCar1, raceCar2);
  printFirstPlaceAfterLap(race);
  
  }
  printCongratulation(race);
}
  


int main() {
	srand(time(0));
  printIntro();
  printCountDown();
  struct RaceCar car1 = {"Bob" , "yellow", 0};
  struct RaceCar car2 ={"Cosmo","orange",0};
  startRace (&car1, &car2);
  



  
  

  

};