#include<graphics.h>
void selector(int,int,int);
void function_execution(int choice);
void multiplayer();
void restart_game();
//Loading Game
void loading_game(void)
{
    readimagefile("Pictures/3.JPEG",280,180,420,300);
    rectangle(310,330,390,340);
    setcolor(CYAN);
    for(int i=0;i<=76;i++)
    {
        rectangle(310+i,332,310+i,338);
        delay(100);
    }
    cleardevice();
}
//Game Menu Animation
void menu(void)
{
    setbkcolor(BLACK);
    cleardevice();
    setcolor(4);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(10,575,"warning : This Game Played Only with Keyboard!");
    setcolor(3);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(260,250,"1");
    outtextxy(265,300,"2");
    outtextxy(275,350,"3");
    outtextxy(285,390,"4");
    outtextxy(295,450,"5");
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
    readimagefile("Pictures/title.JPEG",30,30,660,150);
    readimagefile("Pictures/singleplayer.JPEG",150,150,550,400);
    readimagefile("Pictures/multiplayer.JPEG",150,200,550,450);
    readimagefile("Pictures/controls.JPEG",30,30,660,150);
    readimagefile("Pictures/about.JPEG",150,300,550,550);
    readimagefile("Pictures/exit.JPEG",150,350,550,600);
    selector(250,1,1);

}
//Menu Sector
void selector(int h,int key,int choice)
{
    if(key==0)
    {
        setcolor(BLACK);
    }
    else
    {
        setcolor(LIGHTRED);
    }
    int d=0;
    int g=0;

    if(choice==1)
    {
        d=20;
        g=40;
    }
    if(choice==2)
    {
        d=20;
        g=50;
    }
    if(choice==3)
    {
        d=30;
        g=60;
    }
    if(choice==4)
    {
        d=40;
        g=70;
    }
    if(choice==5)
    {
        d=50;
        g=80;
    }
    if(choice==6)
    {
        d=200;
        g=66;
    }
    if(choice==7)
    {
        d=100;
        g=230;
    }
    char str1[]="<";
    char str2[]=">";
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(200+d,h,str1);
    outtextxy(460-g,h,str2);

}
void selection(void)
{
    int choice=1;
    while(1)
    {
        if(GetAsyncKeyState(VK_NUMPAD1))
        {
            selector(250,1,1);
            selector(300,0,2);
            selector(350,0,3);
            selector(400,0,4);
            selector(450,0,5);
            //PlaySound(TEXT("sounds/select_menu.wav"),NULL,SND_FILENAME);
            choice=1;
        }
        if(GetAsyncKeyState(VK_NUMPAD2))
        {
            selector(240,0,1);
            selector(300,1,2);
            selector(350,0,3);
            selector(400,0,4);
            selector(480,0,5);
         //PlaySound(TEXT("sounds/select_menu.wav"),NULL,SND_FILENAME);
         choice=2;
        }
        if(GetAsyncKeyState(VK_NUMPAD3))
        {
            selector(240,0,1);
            selector(300,0,2);
            selector(350,1,3);
            selector(400,0,4);
            selector(450,0,5);
         //PlaySound(TEXT("sounds/select_menu.wav"),NULL,SND_FILENAME);
         choice=3;
        }
        if(GetAsyncKeyState(VK_NUMPAD4))
        {
            selector(240,0,1);
            selector(300,0,2);
            selector(350,0,3);
            selector(390,1,4);
            selector(450,0,5);
         //PlaySound(TEXT("sounds/select_menu.wav"),NULL,SND_FILENAME);
         choice=4;
        }
        if(GetAsyncKeyState(VK_NUMPAD5))
        {
            selector(240,0,1);
            selector(300,0,2);
            selector(350,0,3);
            selector(400,0,4);
            selector(450,1,5);
         //PlaySound(TEXT("sounds/select_menu.wav"),NULL,SND_FILENAME);
         choice=5;
        }
        if(GetAsyncKeyState(VK_RETURN))
        {
            function_execution(choice);
        }
        delay(10);
    }
}

//Escape
void esc_theme(int option)
{
    while(1)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            cleardevice();
            menu();
            //Playsound(TEXT("sounds/esc.wav"),NULL,SND_FILENAME"));
            selection();
            function_execution(option);
        }
    }
}
//Quit
void quit()
{
  while(1)
  {
      if(GetAsyncKeyState(VK_NUMPAD1))
      {
          selector(330,1,7);
          selector(330,0,6);
          //PlaySound(TEXT("sounds/menu.wav"),NULL,SND_FILENAME);
           if(GetAsyncKeyState(VK_RETURN))
        {
          //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
          closegraph();
      }
  }
  if(GetAsyncKeyState(VK_NUMPAD2))
      {
          selector(330,0,7);
          selector(330,1,6);
          //PlaySound(TEXT("sounds/menu.wav"),NULL,SND_FILENAME);
           if(GetAsyncKeyState(VK_RETURN))
        {
          //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
          selection();
      }
  }
  if(GetAsyncKeyState(VK_ESCAPE))
      {
          menu();
          //PlaySound(TEXT("sounds/esc.wav"),NULL,SND_FILENAME);
          selection();
  }
}
}
//Game Interface
void game_interface()
{
    int board_color,box_color;
    board_color=9;
    box_color=8;
    setcolor(board_color);
    for(int i=0;i<5;i++)
    {
        //Vertical
        line(148+i,75,148+i,525);
        line(298+i,75,298+i,525);
        //Horizontal
        line(25,223+i,425,223+i);
        line(25,373+i,425,373+i);
    }
    setcolor(box_color);
    for(int i=0;i<5;i++)
    {
        rectangle(450+i,25+i,675-i,575-i);
    }
    setcolor(8);
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(50,85,"1");
    outtextxy(200,85,"2");
    outtextxy(350,85,"3");
    outtextxy(50,235,"4");
    outtextxy(200,235,"5");
    outtextxy(350,235,"6");
    outtextxy(50,385,"7");
    outtextxy(200,385,"8");
    outtextxy(350,385,"9");
    readimagefile("Pictures/turn.JPEG",0,-300,1200,500);
    readimagefile("Pictures/player1.JPEG",500,120,620,200);
    readimagefile("Pictures/winner.JPEG",0,-50,1130,600);
    readimagefile("Pictures/-.JPEG",120,0,1000,700);
    setcolor(RED);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(10,550,"Press 'R' To Restart The Game!");
}
//Position of x_a
int p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;//One Thing At One
int n=0;
int a[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
int flag=0;
int j=1;
int k=1;
int x=0;
void check_multi_winner(int);
//x
void x_o(int place)
{
    int l,t,r,b;
    char ch;
    if(a[place-1]==-1)
       {
         if(n%2==0)
            {
                readimagefile("Pictures/player1.JPEG",500,120,620,200);
                readimagefile("Pictures/player2.JPEG",500,120,620,200);
            }
       }
       if(place==1 && p1==1)
       {
           l=15;t=85;r=145;b=215;
           p1++;
           n++;
       }
        else if(place==2 && p2==1)
       {
           l=160;t=85,r=290,b=215;
           p2++;
           n++;
       }
       else if(place==3 && p3==1)
       {
           l=305;t=85,r=435,b=215;
           p3++;
           n++;
       }
        else if(place==4 && p4==1)
       {
           l=15;t=85,r=145,b=365;
           p4++;
           n++;
       }
        else if(place==5 && p5==1)
       {
           l=160;t=235,r=290,b=365;
           p5++;
           n++;
       }
        else if(place==6 && p6==1)
       {
           l=305;t=235,r=435,b=365;
           p6++;
           n++;
       }
        else if(place==7 && p7==1)
       {
           l=15;t=385,r=145,b=515;
           p7++;
           n++;
       }
        else if(place==8 && p8==1)
       {
           l=160;t=385,r=290,b=515;
           p8++;
           n++;
       }
        else if(place==9 && p9==1)
       {
           l=305;t=385,r=435,b=515;
           p9++;
           n++;
       }
       if(a[place-1]==-1)
       {
           if(n%2==0)
           {
               ch='0';
               j++;
           }
           else
           {
               ch='X';
               k++;
           }
       }
       if(ch=='0')
       {
           readimagefile("Pictures/O.JPEG",l,t,r,b);
           //PlaySound(TEXT("sounds/oblue.wav"),NULL,SND_FILENAME);
       }
       else if(ch=='X')
       {
           readimagefile("Pictures/X.JPEG",l,t,r,b);
           //PlaySound(TEXT("sounds/xred.wav"),NULL,SND_FILENAME);
       }
       if(ch=='0')
       {
           a[place-1]=0;
           check_multi_winner(0);
       }
       if(ch=='X')
       {
           a[place-1]=1;
           check_multi_winner(1);
       }
       if(j>=5 && k>=6)
       {
           j=1;
           k=1;
           check_multi_winner(2);
       }
}
//Check Winning
void check_multi_winner(int no)
{
    if(a[0]==no && a[1]==no && a[2]==no)
    {
        flag++;
    }
    if(a[3]==no && a[4]==no && a[5]==no)
    {
        flag++;
    }
    if(a[6]==no && a[7]==no && a[8]==no)
    {
        flag++;
    }
    if(a[0]==no && a[3]==no && a[6]==no)
    {
        flag++;
    }
    if(a[1]==no && a[4]==no && a[7]==no)
    {
        flag++;
    }
    if(a[2]==no && a[5]==no && a[8]==no)
    {
        flag++;
    }
    if(a[2]==no && a[4]==no && a[6]==no)
    {
        flag++;
    }
    if(a[0]==no && a[4]==no && a[8]==no)
    {
        flag++;
    }
    if(flag==1)
    {
        if(no==0)
        {
            readimagefile("Pictures/player2.JPEG",500,300,620,380);
            //PlaySound(TEXT("sounds/winner.wav"),NULL,SND_FILENAME);
        }
        if(no==1)
        {
            readimagefile("Pictures/player1.JPEG",500,300,620,380);
            //PlaySound(TEXT("sounds/winner.wav"),NULL,SND_FILENAME);
        }
    }
    else if(flag==0 && no==2)
    {
      readimagefile("Pictures/noone.JPEG",500,300,620,380);
        //PlaySound(TEXT("sounds/noone.wav"),NULL,SND_FILENAME);
    }
    restart_game();
}
//Restart Game
void restart_game()
{
    if(flag==1||(flag==0 && x==2))
    {
        setcolor(RED);
        settextstyle(3,HORIZ_DIR,2);
        outtextxy(490,430,"Restart 5 Second To");
        outtextxy(500,450,"Restart Game!");
        delay(5000);
        p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;
        n=0;
        flag=0;
        j=1;
        k=1;
        x=0;
        for(int i=0;i<9;i++)
        {
            a[i]=1;
        }
        function_execution(2);
        esc_theme(2);
    }
}
//Multiplayer Logic
void multiplayer()
{
    readimagefile("Pictures/turn.JPEG",0,-300,1200,500);
    readimagefile("Pictures/player1.JPEG",500,120,620,200);
    readimagefile("Pictures/winner.JPEG",0,-50,1130,600);
    readimagefile("Pictures/-.JPEG",120,0,1000,700);
    int place=0;
    while(1)
    {
        if(GetAsyncKeyState(VK_NUMPAD1))
        {
            place=1;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD2))
        {
            place=2;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD3))
        {
            place=3;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD4))
        {
            place=4;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD5))
        {
            place=5;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD6))
        {
            place=6;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD7))
        {
            place=7;
            x_o(place);
        }if(GetAsyncKeyState(VK_NUMPAD8))
        {
            place=8;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_NUMPAD9))
        {
            place=9;
            x_o(place);
        }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;
            n=0;
            flag=0;
            j=1;
            k=1;
            x=0;
            for(int i=0;i<9;i++)
            {
                a[i]=-1;
            }
            menu();
            //PlaySound(TEXT("sounds/esc.wav"),NULL,SND_FILENAME);
            break;
        }
        if(GetAsyncKeyState(0x52))
        {
            p1=1,p2=1,p3=1,p4=1,p5=1,p6=1,p7=1,p8=1,p9=1;
            n=0;
            flag=0;
            j=1;
            k=1;
            x=0;
             for(int i=0;i<9;i++)
            {
                a[i]=-1;
            }

            cleardevice();
            game_interface();
             //PlaySound(TEXT("sounds/restart.wav"),NULL,SND_FILENAME);
        }
    }
}
//Function Execution
void function_execution(int choice)
{
    if(choice==1)
    {
        cleardevice();
        setcolor(LIGHTGREEN);
        settextstyle(0,HORIZ_DIR,4);
        outtextxy(150,250,"COMING SOON...");
        //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
        esc_theme(1);
    }
    if (choice==2)
    {
        cleardevice();
        game_interface();
         //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
         multiplayer();
    }
    if(choice==3)
    {
        cleardevice();
        readimagefile("Pictures/controls_key.JPEG",-200,0,900,600);
        //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
        esc_theme(3);
}
if(choice==4)
{
    int page=0;
    //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
    cleardevice();
    for(int i=200;i<=1300;i++)
    {
        setfillstyle(SOLID_FILL,BLACK);
        readimagefile("Pictures/about.JPEG",0,800-i,700,1300-i);
        bar(50,1320-i,650,2000-i);
         if(GetAsyncKeyState(VK_ESCAPE))
         {
             break;
         }
         page=1-page;
         delay(1);
    }
    menu();
    //PlaySound(TEXT("sounds/esc.wav"),NULL,SND_FILENAME);
    selection();
}
if(choice==5)
{
    cleardevice();
    setcolor(13);
   settextstyle(3,HORIZ_DIR,5);
   outtextxy(140,330,"1");
   outtextxy(440,330,"2");
   readimagefile("Pictures/quit.JPEG",50,100,650,400);
   readimagefile("Pictures/yes.JPEG",-100,200,500,500);
   readimagefile("Pictures/no.JPEG",200,200,800,500);
    //PlaySound(TEXT("sounds/enter.wav"),NULL,SND_FILENAME);
    quit();
}
}
//Driver Program
int main()
{
    initwindow(700,600,"Tic Tac Toe",150,50);
    loading_game();
    menu();
    //PlaySound(TEXT("sounds/start.wav"),NULL,SND_FILENAME);
    selection();
    getch();
    closegraph();
}
