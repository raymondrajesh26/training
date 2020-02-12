#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;
<<<<<<< HEAD

   while (*p)
      ++p;

   return (p - s);
=======
   const char *p =s;
   while (*p)
      ++p;


>>>>>>> ffbb933b692d30d3bd539ad03acc40717511cb48
}

int main(void)
{
   int i;
   char *s[] =
   {
      "Git tutorials",
      "zippyops"
   };

   for (i = 0; i < 2; ++i)

   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}

