#include<stdio.h>

union ROL_tag {byte b[4]; float fval;} ROL_Union;

int main()
{
  ROL_Union.b[0] = 101;
  ROL_Union.b[1] = 102;
  ROL_Union.b[2] = 103;
  ROL_Union.b[3] = 104
  if(isnan(ROL_Union.fval) != 1)
  {
    printf("%d", ROL_Union.fval);
  }
  return 0;
}
