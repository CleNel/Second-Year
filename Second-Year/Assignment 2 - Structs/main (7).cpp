#include <iostream>
#include <iomanip>
using namespace std;

struct Person {

  string name;
  int score;
  
};

int main() {
  
  string keyName;
  float testNum;
  Person p1, maxp, minp;
  int total = 0;

  maxp.name = " ";
  minp.name = " ";
  maxp.score = -1;
  minp.score = -1;
  
  
  cout << "Enter name to filter. Enter \"all\" to process all records:" << endl;
  cin >> keyName;

  if(keyName == "all"){

    cout << "Enter data:" << endl;
    cin >> p1.name;
    
    while(p1.name != "done"){

      
      cin >> testNum;

      if(testNum == (int)testNum){

      p1.score = testNum;
      
      if(cin.fail()){
        cin.clear();
      } else {
        
      if(p1.score > maxp.score){
        maxp.score = p1.score;
        maxp.name = p1.name;
      }

      if(p1.score < minp.score || minp.score == -1){
        minp.score = p1.score;
        minp.name = p1.name;
      }

      total = total + p1.score;

        }
        
      }
      
      cin >> p1.name;
      
    }
    
  } else {

    cout << "Enter data:" << endl;
    cin >> p1.name;
    
    while(p1.name != "done"){
      
      cin >> p1.score;

      if(p1.name == keyName){
      
        if(p1.score > maxp.score){
        maxp.score = p1.score;
        maxp.name = p1.name;
      }

      if(p1.score < minp.score || minp.score == -1){
        minp.score = p1.score;
        minp.name = p1.name;
      }
      
        total = total + p1.score;

      }
       cin >> p1.name;
      
    }
    
  }

  cout << "-------" << endl;
  cout << "Results" << endl;
  cout << "-------" << endl;
  
  if(minp.name == " "){
    cout << "Minimum: (no data found)" << endl;
  } else {
    cout << "Minimum: " << minp.name << " " << minp.score << endl;
  }
  
  if(maxp.name == " "){
    cout << "Maximum: (no data found)" << endl;
  } else {
    cout << "Maximum: " << maxp.name << " " << maxp.score << endl;
  }

  if(total == 0){
    cout << "Total: (no data found)";
  } else {
    cout << "Total: " << total;
  }


  return 0;
}