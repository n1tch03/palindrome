#include <iostream>

int reverse_number(int num){
  int reverse_num = 0;
  while(num > 0){
    int last_digit = num % 10;
    reverse_num = reverse_num * 10 + last_digit;
    num = num / 10;
  }
  return reverse_num;
}

int main(){
  unsigned int num;
  std::cin >> num;
  int reverse_num = reverse_number(num);
  if(num == reverse_num){
    std::cout << "number is a palindrome\n";
  }else{
    std::cout << "number is not a palindrome\n";
  }
}
