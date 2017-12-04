#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;
  int max = -1, min = 101, score;
  string maxname, minname, maxid, minid, id, name;

  for(int i = 0; i < n; i++){
    cin >> name;
    cin >> id;
    cin >> score;
    if(max < score){
      max = score;
      maxname = name;
      maxid = id;
    }
    if(min > score){
      min = score;
      minname = name;
      minid = id;
    }
  }
  cout << maxname << " " << maxid << endl << minname << " " << minid;
  return 0;
}