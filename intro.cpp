#include <iostream>
using namespace std;

int square(int a) {
    return a * a;
}

int add(int a, int b){
  return a + b;
}

string name(string derek, string Ayala){
return derek + " " + Ayala + "!";
}
// main() is where program execution begins.
int main() {
 cout << name ("Barack", "Obama") << endl;

return 0;
}
