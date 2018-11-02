// pointers


 int PlayerX = 0;


/*
*********************************************
            Back Yard
********************************************
*/
void Backround1()
{
    drawBmpfile(0,127,"Stage_1.rgf");
}
//============================================//

/*
*********************************************
                 Player
********************************************
*/
void playerShow1(int X = 0, int Y = 30)
{
    fillEllipse(X, Y, X + 20, Y - 30);
    eraseRect(X + 10, Y - 7, X + 20, Y - 12);
}


void playerErase1(int X = 0, int Y = 30)
{
    eraseEllipse(X, Y, X + 20, Y - 30);
    eraseRect(X + 10, Y - 7, X + 20, Y - 12);
}

void playerMove(int dir , int speed = 3,int pause = 400)
{
	          playerErase1(PlayerX ,30);
            sleep(1);
            PlayerX += speed*dir;
            playerShow1(PlayerX,30);
            sleep(pause);
}

//============================================//


task main()
{

    Backround1();

    //Game Loop:
    while(getButtonPress(buttonBack) == 0)
    {
    	//move right
        if(getButtonPress(buttonRight) == 1)
        {
          playerMove(1,3,400);
        }
        //move left
        if(getButtonPress(buttonLeft) == 1)
        {
          playerMove(-1,3,400);
        }
        sleep(1);
    }
}
