#include <iostream>
int smallesti(int list[]);
int biggest(int list[]);

int main() 
{
  int list1[] = {6, 4, 5, 1, 8, 2}; 
  int list2[] = {0, 0, 0, 0, 0, 0};
  for (int i = 0; i < sizeof(list2)/sizeof(list2[0]);i++) {
    list2[i] = list1[smallesti(list1)];
    std::cout << list2[i] << ", ";
    list1[smallesti(list1)] = biggest(list1) + 1;
  }
  std::cout << '\n';
}

int smallesti(int list[]) 
{
  int first = (list[0] + list[1] - std::abs(list[0] - list[1]))/2; // We find the smallest value of list[0 and 1]
  int second = (list[2] + list[3] - std::abs(list[2] - list[3]))/2; // We do the same for list[2 and 3]
  int third = (list[4] + list[5] - std::abs(list[4] - list[5]))/2; // Then for list[4 and 5]
  int fourth = (first + second - std::abs(first - second))/2; // We now have the smallest value of list[0, 1, 2, 3]
  int fifth = (third + fourth - std::abs(third - fourth))/2; // And finally, we have the smallest value of list[]

  for (int i = 0;i < sizeof(int) * 6/sizeof(int);i++) 
  {
    if (fifth == list[i]) {return i;}
  }
  return 0;
} 
int biggest(int list[]) 
{
  int first = (list[0] + list[1] + std::abs(list[0] - list[1]))/2; 
  int second = (list[2] + list[3] + std::abs(list[2] - list[3]))/2;
  int third = (list[4] + list[5] + std::abs(list[4] - list[5]))/2; 
  int fourth = (first + second + std::abs(first - second))/2; 
  int fifth = (third + fourth + std::abs(third - fourth))/2;
  return fifth; 
}
 

