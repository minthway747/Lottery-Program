// MIN shape by MTH  .....9.9.2021....12.15 PM
#include<stdio.h>
int main() {
    int i,j,k=0;
//-------------------------------------------------First line --------------------------------------//
    // start M shape first line ..............
    for (i=1; i<=1; i++)
    {
        for (j=0; j<=1; j++) //........1
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........2
        {
            printf("*");
        }
        for (j=0; j<=7; j++) //........3
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........4
        {
            printf("*");
        }
         for (j=0; j<=1; j++) //........5  ( between M and I) 3 spaces
        {
            printf(" ");
        }
    // Start I shape first line ......................
         for(k=0; k<=10; k++) //........6
        {
            printf("*");
        }
        for (j=0; j<=1; j++) //........7  ( between I and N ) 3 spaces
        {
            printf(" ");
        }
     // Start N shape First line..........................
         for(k=1; k<=1; k++) //........8
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........9
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........10
        {
            printf("*");
        }
         for (j=0; j<=4; j++) //........11  ( between N and T ) 5 spaces
        {
            printf(" ");
        }
// END OF MIN PATTERN
// START OF THWAY PATTERN
    // Start T shape First line..........................
     for(k=0; k<=10; k++) //........12
        {
            printf("*");
        }
        for (j=0; j<=1; j++) //........13  ( between I and N ) 3 spaces
        {
            printf(" ");
        }
     // Start H shape First line..........................
         for(k=1; k<=1; k++) //........14
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........15
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........16
        {
            printf("*");
        }
         //for (j=1;j<=1; j++) //........17 ( between H and W ) 2 spaces
   // {
      //  printf("#");
  //  }
     // Start W shape First line..........................
     for (k=1; k<=1; k++) //........18
     {
         printf("*");
     }
     for(j=0; j<=18; j++) //........19
     {
         printf(" ");
     }
     for (k=0; k<=1; k++) //........20.
     {
         printf("*");
     }
    for(j=0; j<=18; j++) //........21
     {
         printf(" ");
     }
     for (k=1; k<=1; k++) //........22
     {
         printf("*");
     }
     for (j=0; j<=1; j++) //........23 ( between W and A ) 2 spaces
     {
         printf(" ");
     }

 // Start A shape First line................
    for (j=0; j<=4; j++) //........24
     {
         printf(" ");
     }
    for (k=0; k<=1; k++) //........25
    {
        printf("*");
    }
     for (j=0; j<=4; j++) //........26
     {
         printf(" ");
     }
      for (j=0; j<=1; j++) //........27 (between A and Y ) 2 spaces
     {
         printf(" ");
     }
    // Start Y shape First line................
     for (k=1; k<=1; k++) //........28
    {
        printf("*");
    }
    for (j=0; j<=8; j++) //........29  .....10
     {
         printf(" ");
     }
    for (k=1; k<=1; k++) //........30
    {
        printf("*");
    }
    for (j=0; j<=4; j++) //........31  (between Y and H ) 2 spaces
     {
         printf(" ");
     }

//....END OF THWAY PATTERN......//

// .......................................................START OF HAN PATTERN......................................//
    // Start H shape First line..........................second H
         for(k=1; k<=1; k++) //........32
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........33
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........34
        {
            printf("*");
        }
         for (j=0;j<=1; j++) //........35 ( between H and A ) 2 spaces
    {
        printf(" ");
    }
    // Start A shape First line................second A
    for (j=0; j<=9; j++) //........36
     {
         printf(" ");
     }
    for (k=0; k<=1; k++) //........37
    {
        printf("*");
    }
      for (j=0; j<=1; j++) //........39 (between A and N ) 2 spaces
     {
         printf(" ");
     }
     // Start N shape First line..........................second N
          for (j=0; j<=9; j++) //........41
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........42 ( Last N  )
        {
            printf("*");
        }
        for (j=0; j<=8; j++) //........41
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........42 ( Last N  )
        {
            printf("*");
        }

        printf("\n");
    }

 // ................END of  MIN THWAY HAN  FIRST LINE....................//

//-------------------------------------------------Second Line --------------------------------------//
    // start M shape Second line
    for (i=0; i<=3; i++)
    {
        for (j=0; j<=1; j++) //........1
        {
            printf(" ");
        }
        for (k=1; k<=1; k++) //........2
        {
            printf("*");
        }
        for(j=1; j<=i; j++) //........3
        {
            printf(" ");
        }
       for (k=1; k<=1; k++) //........4
        {
            printf("*");
        }
        for(j=2; j>=i; j--) //........5
        {
            printf("  "); //2 spaces
        }
         for (k=1; k<=1; k++) //........6
        {
            printf("*");
        }
        for(j=1; j<=i; j++) //........7
        {
            printf(" ");
        }
          for (k=1; k<=1; k++) //........8
        {
            printf("*");
        }
         for (j=0; j<=1; j++) //........9   ( between M and I ) 2 spaces
        {
            printf(" ");
        }
    // start I shape Second  line
        for(j=0; j<=4; j++) //........10
        {
            printf(" ");
        }
        for(k=1;k<=1; k++) //........11
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........12
        {
            printf(" ");
        }
          for (j=0; j<=1; j++) //........13   ( between I and N ) 2 spaces
        {
            printf(" ");
        }
    // start N shape Second  line ..........
         for(k=1;k<=1; k++) //........14
        {
            printf("*");
        }
        for (j=1; j<=i; j++) //........15
        {
            printf(" ");
        }
        for (k=1; k<=1; k++) //........16
        {
            printf("*");
        }
        for(j=3; j>=i; j--) //........17
        {
            printf(" ");
        }
        for(j=0; j<=3; j++) //........18
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........19
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........20 ( between N and T ) 2 spaces
        {
            printf(" ");
        }
 // start T shape Second  line ..........
        for(j=0; j<=4; j++) //........21
        {
            printf(" ");
        }
        for(k=1;k<=1; k++) //........22
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........23
        {
            printf(" ");
        }
          for (j=0; j<=1; j++) //........24   ( between T and H ) 2 spaces
        {
            printf(" ");
        }
 // start H shape Second  line ..........
         for(k=1;k<=1; k++) //........25
        {
            printf("*");
        }
         for(j=0; j<=8; j++) //........26
        {
            printf(" ");
        }
          for(k=1;k<=1; k++) //........27
        {
            printf("*");
        }
         for (j=1; j<=1; j++) //........28   ( between H and W ) 2 spaces
        {
            printf(" ");
        }
    // start W shape Second  line ..........
        for (j=1; j<=i; j++) //........29
        {
            printf(" ");
        }
        for (k=1; k<=1; k++) //........30
        {
            printf("*");
        }
       for (j=2; j>=i; j--) //........31
       {
           printf(" ");
       }
       for (j=0; j<=10; j++) //........32
       {
           printf(" ");
       }
         for (j=2; j>=i; j--) //........33
       {
           printf(" ");
       }
       for (k=1; k<=1; k++) //........34
       {
           printf("*");
       }
       for (j=0; j<=i; j++) //........35
       {
           printf("  "); //2 spaces
       }
       for (k=1; k<=1; k++) //........36
       {
           printf("*");
       }
       for (j=3; j>=i; j--) //........37
       {
           printf(" ");
       }
       for (j=0; j<=8; j++) //........38
       {
           printf(" ");
       }
        for (j=3; j>=i; j--) //........39
       {
           printf(" ");
       }
        for (k=1; k<=1; k++) //........40
       {
           printf("*");
       }
       for (j=0; j<=i; j++) //........41
       {
           printf(" ");
       }
// Start A second line
        for (j=5; j>=i; j--) //........42
       {
           printf(" ");
       }
      for (k=1; k<=1; k++) //........43
       {
           printf("*");
       }
       for (j=0; j<=i; j++) //........44
       {
           printf("  "); // 2 spaces
       }
       for (k=1; k<=1; k++) //........45
       {
           printf("*");
       }
// Start Y second line
     for (j=3; j>=i; j--)
     {
         printf(" ");
     }
    for(j=0; j<=1; j++)
    {
        printf(" ");
    }
    for (j=0; j<=i; j++)
    {
        printf(" ");
    }
    for (k=1; k<=1; k++)
    {
        printf("*");
    }
    for (j=2; j>=i; j--)
    {
        printf(" ");
    }
    for (j=1; j<=1; j++)
    {
        printf(" ");
    }
    for (j=2; j>=i; j--)
    {
        printf(" ");
    }
     for (k=1; k<=1; k++)
    {
        printf("*");
    }
    for (j=0; j<=i; j++)
    {
        printf(" ");
    }
     for (j=0; j<=4; j++)
    {
        printf(" ");
    }
// Start  HAN  Second Line
// Start  H Second line
     // start H shape Second  line ..........
         for(k=1;k<=1; k++) //........25
        {
            printf("*");
        }
         for(j=0; j<=8; j++) //........26
        {
            printf(" ");
        }
          for(k=1;k<=1; k++) //........27
        {
            printf("*");
        }
         for (j=0; j<=4; j++) //........28   ( between H and W ) 2 spaces
        {
            printf(" ");
        }
// Start A second line
        for (j=5; j>=i; j--) //........42
       {
           printf(" ");
       }
      for (k=1; k<=1; k++) //........43
       {
           printf("*");
       }
       for (j=0; j<=i; j++) //........44
       {
           printf("  ");  // 2 spaces
       }
       for (k=1; k<=1; k++) //........45
       {
           printf("*");
       }
        for (j=3; j>=i; j--) //........44
       {
           printf(" ");
       }
       for (j=0; j<=6; j++)
       {
           printf(" ");
       }
// start N shape Second  line ..........
         for(k=1;k<=1; k++) //........14
        {
            printf("*");
        }
        for (j=1; j<=i; j++) //........15
        {
            printf(" ");
        }
        for (k=1; k<=1; k++) //........16
        {
            printf("*");
        }
        for(j=3; j>=i; j--) //........17
        {
            printf(" ");
        }
        for(j=0; j<=3; j++) //........18
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........19
        {
            printf("*");
        }
printf("\n");
    }
//-------------------------------------------------Third Line --------------------------------------//
    // start M shape Third line
    for (i=1; i<=1; i++)
    {
        for (j=0; j<=1; j++) //........1
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........2
        {
            printf("*");
        }
        for(j=0; j<=7; j++) //........3
        {
            printf(" ");
        }
         for(k=1; k<=1; k++) //........5
        {
            printf("*");
        }
        for(j=0; j<=1; j++) //........6   ( between M and I ) 2 spaces
        {
            printf(" ");
        }
     // start I shape Third  line
     for (j=0; j<=4; j++)  //........7
     {
         printf(" ");
     }
     for (k=1; k<=1; k++)  //........8
     {
         printf("*");
     }
    for (j=0; j<=4; j++)  //........9
     {
         printf(" ");
     }
     for (j=0; j<=1; j++) //........9 ( between I and N ) 2 spaces
     {
         printf(" ");
     }
    // start N shape Third  line
    for(k=1; k<=1; k++) //........10
    {
        printf("*");
    }
    for(j=1; j<=4; j++) //........11
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........12
    {
        printf("*");
    }
    for(j=0; j<=3; j++) //........13
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........14
    {
        printf("*");
    }
     for (j=0; j<=4; j++) //........15 ( between N and T ) 2 spaces
     {
         printf(" ");
     }

// start T shape Third  line
        for(j=0; j<=4; j++) //........15 (T)
        {
            printf(" ");
        }
        for(k=1;k<=1; k++) //........16  (T center )
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........17
        {
            printf(" ");
        }
          for (j=0; j<=1; j++) //........17   ( between T and H ) 2 spaces
        {
            printf(" ");
        }
 // Start H shape First line..........................
         for(k=0; k<=10; k++) //........18
        {
            printf("*");
        }
         for (j=0;j<=4; j++) //........19 ( between H and W ) 2 spaces
    {
        printf(" ");
    }
// Start W third line
    for (k=1; k<=1; k++)  //........20
    {
        printf("*");
    }
    for (j=0; j<=8; j++)  //........21
    {
        printf(" ");
    }
    for (k=1; k<=1; k++) //........22
    {
        printf("*");
    }
     for (j=0; j<=9; j++) //........23
    {
        printf(" ");
    }
    for (k=1; k<=1; k++) //........24
    {
        printf("*");
    }
     for (j=0; j<=8; j++) //........25
    {
        printf(" ");
    }
     for (k=1; k<=1; k++) //........26
    {
        printf("*");
    }
    for (j=0; j<=6; j++) //........27
    {
        printf(" ");
    }
// Start A third Line
    for (k=0; k<=11; k++) //........28
    {
        printf("*");
    }
// Start  Y third line
    for (j=0; j<=6; j++)  //........29
    {
        printf(" ");
    }
    for (k=1; k<=1; k++) //........30
    {
        printf("*");
    }
    for (j=0; j<=9; j++)  //........29
    {
        printf(" ");
    }
// Start HAN  Third Line
    // Start H third line
    for(k=0; k<=10; k++) //........18
        {
            printf("*");
        }
     for (j=0;j<=6; j++) //........19 ( between H and W ) 2 spaces
    {
        printf(" ");
    }

    // Start A third Line
    for (k=0; k<=11; k++) //........28
    {
        printf("*");
    }
     for (j=0;j<=6; j++) //........19 ( between H and W ) 2 spaces
    {
        printf(" ");
    }
 // start N shape Third  line
    for(k=1; k<=1; k++) //........10
    {
        printf("*");
    }
    for(j=1; j<=4; j++) //........11
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........12
    {
        printf("*");
    }
    for(j=0; j<=3; j++) //........13
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........14
    {
        printf("*");
    }
printf("\n");
    }
//-------------------------------------------------Fourth Line --------------------------------------//
    // start M shape fourth line
    for (i=0; i<=3; i++)
    {
        for (j=0; j<=1; j++) //........1
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........2
        {
            printf("*");
        }
        for(j=0; j<=7; j++) //........3
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........4
        {
            printf("*");
        }
         for (j=0; j<=1; j++) //........5  ( between M and I ) 2 spaces
        {
            printf(" ");
        }
    //Start I shape fourth line
        for(j=0; j<=4; j++) //........6
        {
            printf(" ");
        }
         for(k=1; k<=1; k++) //........7 + 8
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........9
        {
            printf(" ");
        }
        for(j=0; j<=1; j++) //........10  ( between M and I ) 2 spaces
        {
            printf(" ");
        }
    // start N shape fourth line
       for(k=1; k<=1; k++) //........10
        {
            printf("*");
        }
        for(j=0; j<=3; j++) //........11
        {
            printf(" ");
        }
        for(j=0; j<=i; j++) //........12
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........13
        {
            printf("*");
        }
        for (j=2; j>=i; j--) //........14
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //..........15
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //..........16 ( between N and T ) 2 spaces
        {
            printf(" ");
        }
// Start THWAY fourth line
// start T shape fourth  line
        for(j=0; j<=4; j++) //........17
        {
            printf(" ");
        }
        for(k=1;k<=1; k++) //........18
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........19
        {
            printf(" ");
        }
          for (j=0; j<=1; j++) //........20   ( between T and H ) 2 spaces
        {
            printf(" ");
        }
 // Start H shape Fourth line..........................
         for(k=1; k<=1; k++) //........21
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........22
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........23
        {
            printf("*");
        }
         for (j=0;j<=4; j++) //........24 ( between H and W ) 2 spaces
    {
        printf(" ");
    }
//Start W fourth line
    for (j=0; j<=i; j++) //............25
    {
        printf(" ");
    }
    for (k=1; k<=1; k++) //............26
    {
        printf("*");
    }
    for (j=2; j>=i; j--) //............27
    {
        printf(" ");
    }
    for (j=1; j<=1; j++) //............27
    {
        printf(" ");
    }
      for (j=2; j>=i; j--) //............27
    {
        printf(" ");
    }
    for (k=1; k<=1; k++) //............28
    {
        printf("*");
    }
    for (j=0; j<=i; j++) //............29
    {
        printf(" ");
    }
    for (j=0; j<=9; j++) //............30
    {
        printf(" ");
    }
     for (j=0; j<=i; j++)  //............31
    {
        printf(" ");
    }
     for (k=1; k<=1; k++)  //............32
    {
        printf("*");
    }
     for (j=2; j>=i; j--)  //............33
    {
        printf(" ");
    }
    for (j=1; j<=1; j++)  //............33
    {
        printf(" ");
    }
      for (j=2; j>=i; j--)  //............33
    {
        printf(" ");
    }
     for (k=1; k<=1; k++)  //............34
    {
        printf("*");
    }
    for (j=0; j<=i; j++)
    {
        printf(" ");
    }
    for (j=0; j<=1; j++)
    {
        printf(" ");
    }
// Start A fourth line
    for (j=1; j<=1; j++) //............27
    {
        printf(" ");
    }
      for (j=2; j>=i; j--) //............27
    {
        printf(" ");
    }
     for (k=1; k<=1; k++) //............28
    {
        printf("*");
    }
    for (j=0; j<=i; j++) //............29
    {
        printf(" ");
    }
    for (j=0; j<=9; j++) //............30
    {
        printf(" ");
    }
     for (j=0; j<=i; j++)  //............31
    {
        printf(" ");
    }
     for (k=1; k<=1; k++)  //............32
    {
        printf("*");
    }
// Start Y fourth line
    for (j=3; j>=i; j--)
    {
        printf(" ");
    }
    for (j=0; j<=1; j++)
    {
        printf(" ");
    }
      for (k=1; k<=1; k++)  //............32
    {
        printf("*");
    }
    for (j=0; j<=9; j++)  //........29
    {
        printf(" ");
    }
// Start HAN Fourth line
// Start H shape Fourth line..........................
         for(k=1; k<=1; k++) //........21
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........22
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........23
        {
            printf("*");
        }
         for (j=0;j<=1; j++) //........24 ( between H and W ) 2 spaces
    {
        printf(" ");
    }
//  Start A fourth line
    // Start A fourth line
    for (j=1; j<=1; j++) //............27
    {
        printf(" ");
    }
      for (j=2; j>=i; j--) //............27
    {
        printf(" ");
    }
     for (k=1; k<=1; k++) //............28
    {
        printf("*");
    }
    for (j=0; j<=i; j++) //............29
    {
        printf(" ");
    }
    for (j=0; j<=9; j++) //............30
    {
        printf(" ");
    }
     for (j=0; j<=i; j++)  //............31
    {
        printf(" ");
    }
     for (k=1; k<=1; k++)  //............32
    {
        printf("*");
    }
      for (j=5;j>=i; j--) //........19 ( between H and W ) 2 spaces
    {
        printf(" ");
    }
  // start N shape fourth line
       for(k=1; k<=1; k++) //........10
        {
            printf("*");
        }
        for(j=0; j<=3; j++) //........11
        {
            printf(" ");
        }
        for(j=0; j<=i; j++) //........12
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........13
        {
            printf("*");
        }
        for (j=2; j>=i; j--) //........14
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //..........15
        {
            printf("*");
        }
 printf("\n");
    }
//-------------------------------------------------Fifth Line --------------------------------------//
    // start M shape fift line ..............
    for (i=1; i<=1; i++)
    {
        for (j=0; j<=1; j++) //........1
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........2
        {
            printf("*");
        }
        for (j=0; j<=7; j++) //........3
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........4
        {
            printf("*");
        }
         for (j=0; j<=1; j++) //........5  ( between M and I) 3 spaces
        {
            printf(" ");
        }
    // Start I shape  fift line ......................
         for(k=0; k<=10; k++) //........6
        {
            printf("*");
        }
        for (j=0; j<=1; j++) //........7  ( between I and N ) 3 spaces
        {
            printf(" ");
        }
     // Start N shape  fift line..........................
         for(k=1; k<=1; k++) //........8
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........9
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........10
        {
            printf("*");
        }
         for (j=0; j<=4; j++) //........11  ( between N and T ) 5 spaces
        {
            printf(" ");
        }
// Start THWAY fifth line
// start T shape fifth  line
        for(j=0; j<=4; j++) //........11
        {
            printf(" ");
        }
        for(k=1;k<=1; k++) //........12 (T center)
        {
            printf("*");
        }
        for(j=0; j<=4; j++) //........13
        {
            printf(" ");
        }
          for (j=0; j<=1; j++) //........13   ( between T and H ) 2 spaces
        {
            printf(" ");
        }
 // Start H shape Fourth line..........................
         for(k=1; k<=1; k++) //........14
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........15
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........16
        {
            printf("*");
        }
         for (j=0;j<=1; j++) //........17 ( between H and W ) 2 spaces
        {
        printf(" ");
        }
//Start  W fifth line
    for (j=0; j<=7; j++)  //........17
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........18
    {
        printf("*");
    }
     for (j=0; j<=19; j++) //........19
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........20
    {
        printf("*");
    }
    for (j=0; j<=6; j++) //........21
    {
        printf(" ");
    }
     for(k=1; k<=1; k++) //........20
    {
        printf("*");
    }
    for (j=0; j<=19; j++) //........19
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........20
    {
        printf("*");
    }
// Start Y fifth line
    for (j=0; j<=1; j++)
    {
        printf(" ");
    }
    for (k=1; k<=1; k++)
    {
        printf("*");
    }
    for (j=0; j<=9; j++)  //........29
    {
        printf(" ");
    }
// Start HAN Fifth line
// Start H shape Fifth line..........................
         for(k=1; k<=1; k++) //........14
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........15
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........16
        {
            printf("*");
        }
         for (j=0;j<=1; j++) //........17 ( between H and W ) 2 spaces
        {
        printf(" ");
        }
// Start A Fifth line
     for(k=1; k<=1; k++) //........18
    {
        printf("*");
    }
     for (j=0; j<=19; j++) //........19
    {
        printf(" ");
    }
    for(k=1; k<=1; k++) //........20
    {
        printf("*");
    }
     for (j=0; j<=1; j++) //........19
    {
        printf(" ");
    }
     // Start N shape  fift line..........................
         for(k=1; k<=1; k++) //........8
        {
            printf("*");
        }
          for (j=0; j<=8; j++) //........9
        {
            printf(" ");
        }
        for(k=1; k<=1; k++) //........10
        {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
