#include <iostream>
#include <queue>
using namespace std;

int main() {

  //buat antrian dengan tipe data int
  queue<int> nums;

  //ngepush data ke queue(antrian)
  nums.push(9);
  nums.push(2);
  nums.push(7);

  //mendapatkan data dari awalnya
  int front = nums.front();
  
  //mendapatkan data dari akhirnya
  int back = nums.back();
  
  //menampilkan data mana yang akan ditampilkan di awal dan akhirnya
  cout<<"queue = "<< front <<","<< back << endl;
  return 0;
}
