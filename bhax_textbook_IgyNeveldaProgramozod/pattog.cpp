#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int
main ( )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;
    int y = 0;

    int iranyx = 1;
    int iranyy = 1;

    int sor;
    int oszlop;

    while (true) {

        getmaxyx ( ablak, oszlop , sor );

        mvprintw ( y, x, "X" );

        refresh ();
        usleep ( 10000 );

        x = x + iranyx;
        y = y + iranyy;

        if ( x>=sor) 
            iranyx *=-1;
        
        if ( !(x>0) ) 
            iranyx *=-1;
        
        if ( !(y>0) ) 
            iranyy *=-1;
        
        if ( y>=oszlop ) 
            iranyy *=-1;
        

    }

    return 0;
}
