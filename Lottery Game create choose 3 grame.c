//-------------Lottery Game Programmer by MTH--------------------\\ #Date - 31.7.2021
//--- You Can Choose Three Game ------ Enjoy !

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(NULL));
    int age =0;
    int id =0;
    int smoney = 0 ;
    int money = 0 ;
    int num = 0 ;
    int number =0;
    int cnum1 = 0;
    int cnum2 = 0;
    int cnum3 = 0;
    int rnum1 = 0 ;
    int rnum2 = 0 ;
    int rnum3 = 0 ;

 //------------Welcome------------------//
    printf(" \n") ;
   printf("<========================Welcome To Our Lottery Game==========================>\n\n");
   printf("<<<<<<<<<<<<<<<<<<<<<<<---------Created By MTH--------->>>>>>>>>>>>>>>>>>>>>>>>\n\n") ;
    printf("Please enter your Age:");
    scanf("%d", &age);
    if ( 17 < age & 50 > age) {
            printf("Please enter your Show Money: ");
            scanf("%d" , & smoney);
            printf("This is Your Show Money : %d\n" , smoney);
                while (smoney > 999 ) {
                    printf("Please enter your ID : " );
                    scanf("%d" , &id);
                        while (id == 111) {
                            printf("Please enter your bet money , must be more than 999Ks:");
                            scanf("%d" , &money);
                                    if (999 < money &  smoney >= money ) {
                                        printf(" ----------------------#--------------------- \n") ;
                                        printf ("If you want to play Game_1 : Press 1\n"); //Game 1
                                        printf ("Game 1 is Choose random number between 0 and 9\n");
                                        printf("If you Win Game 1 , you got  >>10 x money<< of your bet money\n\n");

                                        printf("If you want to play Game_2 : Press 2\n" ) ; // Game 2
                                        printf ("Game 2 is Choose random number between 0 and 100 \n");
                                        printf("If you Win Game 2 , you got  >>20 x money<< of your bet money\n\n");

                                        printf("If you want to play Game_3 : Press 3\n"); //Game 3
                                        printf ("Game 3 is Choose random number between 0 and 999 \n");
                                        printf("If you Win Game 3 , you got  >> 100 x money<< of your bet money\n");
                                        printf(" ----------------------#--------------------- \n") ;
//-------------------------Choose Game  Start-----------------------------------------//
                                        printf("Please Choose  your Game:");
                                        scanf("%d" , &num);
//............................................ Game 1 ..................................................//
                                        if (num==1) {
                                                    printf("Please Choose your lucky number between 0 and 9: ");
                                                    scanf("%d" , &cnum1);
                                                if (0 <= cnum1 & 10 > cnum1) {
                                                    rnum1 = 1+(rand()%9 );
                                                       if (rnum1 == cnum1 ) {
                                                            smoney = (money * 10) + smoney;
                                                            printf ("%s %20s\n" , "Player Number " , "Random Number");
                                                            printf ("%d %22d\n" , cnum1 , rnum1) ;
                                                            printf(" Your Choose Number is Equal Random Number!\n") ;
                                                            printf ("You Won in Lottery ! \n");
                                                            printf("Your Remain Money is : %d  Kyats\n" , smoney);
                                                            printf ("If you wanna Play Again Press 1 \n");
                                                            printf("If you wanna Quit Press 2 \n");
                                                            scanf("%d" ,  &number);
                                                                if (number == 1) {
                                                                    printf ("You can play game now ! \n");
                                                                    } else {
                                                                        printf("Good Bye");
                                                                        exit(0);
                                                                        }
                                                                } // if (rnum == cnum1)
                                                    else {
                                                        smoney = smoney - money ;
                                                        printf ("%s %20s\n" , "Player Number " , "Random Number");
                                                        printf ("%d %22d\n" , cnum1 , rnum1) ;
                                                        printf("Your Choose Number is not Equal Random Number! \n") ;
                                                        printf("     ### TRY AGAIN ### \n");
                                                        printf ("Your Remain Money is : %d Kyats \n " , smoney);
                                                            if (smoney <1000) {
                                                                printf("Try More ! \n You have not enough money : %d Kyats" , smoney);
                                                                exit(0);
                                                                }
                                                    }
                                                }
                                             } //G1 End
//............................................ Game 2 ..................................................//
                                                if (num==2) {
                                                    printf("Please Choose your lucky number between 0 and 100: ");
                                                    scanf("%d" , &cnum2);
                                                if (0 <= cnum2 & 101 > cnum2) {
                                                    rnum2 = 1+(rand()%100);
                                                       if (rnum2 == cnum2 ) {
                                                            smoney = (money * 100) + smoney;
                                                            printf ("%s %20s\n" , "Player Number " , "Random Number");
                                                            printf ("%d %22d\n" , cnum2 , rnum2) ;
                                                            printf(" Your Choose Number is Equal Random Number!\n") ;
                                                            printf ("You Won in Lottery ! \n");
                                                            printf("Your Remain Money is : %d Kyats\n" , smoney);
                                                            printf ("If you wanna Play Again Press 1 \n");
                                                            printf("If you wanna Quit Press 2 \n");
                                                            scanf("%d" ,  &number);
                                                                if (number == 1) {
                                                                    printf ("You can play game now ! \n");
                                                                    } else {
                                                                        printf("Good Bye");
                                                                        exit(0);
                                                                        }
                                                                } // if (rnum == cnum1)
                                                    else {
                                                        smoney = smoney - money ;
                                                        printf ("%s %20s\n" , "Player Number " , "Random Number");
                                                        printf ("%d %22d\n" , cnum2 , rnum2) ;
                                                        printf("Your Choose Number is not Equal Random Number! \n") ;
                                                        printf("     ### TRY AGAIN ### \n");
                                                        printf ("Your Remain Money is : %d Kyats \n " , smoney);
                                                            if (smoney <999) {
                                                                printf("Try More ! \n You have not enough money : %d Kyats" , smoney);
                                                                exit(0);
                                                                }
                                                    }
                                                }
                                             } //G2 End
//............................................ Game 3 ..................................................//
                                    if (num==3) {
                                               printf("Please Choose your lucky number between 0 and 999: ");
                                               scanf("%d" , &cnum3);
                                        if (0 <= cnum3 & 1000 > cnum3) {
                                            rnum3 = 1+(rand() %999 );
                                            if (rnum3 == cnum3 ) {
                                             smoney = (money * 1000) + smoney;
                                            printf ("%s %20s\n" , "Player Number " , "Random Number");
                                            printf ("%d %22d\n" , cnum3 , rnum3) ;
                                            printf(" Your Choose Number is Equal Random Number!\n") ;
                                            printf ("You Won in Lottery ! \n");
                                            printf("Your Remain Money is : %d Kyats\n" , smoney);
                                            printf ("If you wanna Play Again Press 1 \n");
                                            printf("If you wanna Quit Press 2 \n");
                                            scanf("%d" ,  &number);
                                                if (number == 1) {
                                                    printf ("You can play game now ! \n");
                                                    } else {
                                                        printf("Good Bye");
                                                        exit(0);
                                                            }
                                                    } // if (rnum == cnum1)
                                            else {
                                            smoney = smoney - money ;
                                            printf ("%s %20s\n" , "Player Number " , "Random Number");
                                            printf ("%d %22d\n" , cnum3 , rnum3) ;
                                            printf("Your Choose Number is not Equal Random Number! \n") ;
                                            printf("     ### TRY AGAIN ### \n");
                                            printf ("Your Remain Money is : %d Kyats \n " , smoney);
                                                    if (smoney <999) {
                                                        printf("Try More ! \n You have not enough money : %d Kyats" , smoney);
                                                        exit(0);
                                                     }//(smoney <1000)
                                        }
                                    }
                                } //G3 End
//-----------------------Game End------------------------//
            } //(999 < money &  smoney >= money )
         }  //while (id == 111)
      } // while (smoney > 1000)
    } // if ( 17 < age & 50 > age
             else {
                    printf("You cannot Play Game !  ");
                    }
getch();
return 0;
} //int main()

