#include <dos.h>
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
void main()
{
char ch='.';
clrscr();
cout<<"Enter following character to produce sound with different frq\n";
cout<<"a s d f g h j k l";
cout<<"\n q-> for exiting ...\n";
JUMP:
{
ch=getch();
switch(ch)
{
case 'a':
sound(350);
delay(200);
break;
case 's':
sound(380);
delay(200);
break;
case 'd':
sound(410);
delay(200);
break;
case 'f':
sound(440);
delay(200);
break;
case 'g':
sound(470);
delay(200);
break;
case 'h':
sound(500);
delay(200);
break;
case 'j':
sound(530);
delay(200);
break;
case 'k':
sound(560);
delay(200);
break;
case 'l':
sound(590);
delay(200);
break;
}
nosound();
}
if(ch != 'q' )
{
goto JUMP;
}
cout<<"Ok Bye . . . ";
}
