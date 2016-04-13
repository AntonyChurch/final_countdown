#include <iostream>
#include <ctime>
#include <fstream>
#include <chrono>
#include <thread>

std::string getCurrentTimeStamp(){
  std::chrono::time_point<std::chrono::system_clock> theTime;
  theTime = std::chrono::system_clock::now();
  std::time_t the_time = std::chrono::system_clock::to_time_t(theTime);

  return std::ctime(&the_time);
}

unsigned int unixTimestamp(){
  return (unsigned int)time(NULL);
}

int main(){

  std::string timeStamp = getCurrentTimeStamp();
  unsigned int startUnixTimestamp = unixTimestamp();
  timeStamp.erase(timeStamp.size() - 2);
  std::string fileNameA = timeStamp + "a.log";
  std::string fileNameB = timeStamp + "b.log";

  std::cout << "Logging to files: " << fileNameA << " and " << fileNameB << std::endl;

  std::ofstream fileA;
  std::ofstream fileB;

  int index = 0;
  while(true){
    //If index is even write to file A else write to file B
    if(index % 2 == 0){
      fileA.open(fileNameA);
      fileA << startUnixTimestamp << std::endl;
      fileA << unixTimestamp();
      fileA.close();
    }
    else{
      fileB.open(fileNameB);
      fileB << startUnixTimestamp << std::endl;
      fileB << unixTimestamp();
      fileB.close();
    }

    ++index;
  }
  return 0;
}
