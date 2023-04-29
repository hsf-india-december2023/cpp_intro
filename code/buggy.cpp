#include <array>

int main() {
  std::array < std::array<int, 32>, 16 > my_array;

  //for ( int i=0; i<16; i++)
  //  for ( int j=0; j<32; j++)
  //    my_array[i][j]=i+j;

  //int sum=0;
  //for ( int i=0; i<32; i++ )
  //  for ( int j=0; j<32; j++)
  //    sum+=my_array[i][j];
    
  int *myints = new int[20];
  myints[0]=0;
    
  return 0;
}
