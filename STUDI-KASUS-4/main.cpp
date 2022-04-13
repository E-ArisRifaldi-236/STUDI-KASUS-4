#include "../library/input.h"
#include "../library/output.h"
#include "../library/proses.h"
#include <fstream>
#include <iostream>



int main()
{
  Input input;
  input.cetak();
  input.toFile();


  
  Proses proses;
  proses.getData();
  proses.toFile();

  

  Output output;
  output.getData();
  output.cetak();
  return 0;
}