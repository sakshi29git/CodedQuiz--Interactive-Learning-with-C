#include<stdio.h>             //header file for input and output
#include<stdlib.h>           //standard library
#include<time.h>
#include<conio.h>
#include<windows.h>
#include <mmsystem.h>


void quiz1();               //quiz 1 function declaration
void quiz2();               //quiz 2 function declaration
void quiz3();               //quiz3 function declaration
void quiz4();              //quiz4 function declaration
void delay(int a);          //delay function

void gotoxy(int x, int y) 	//function to decide location of the screen
     {
    	
    	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 		 
	    COORD CursorPosition; 
    	CursorPosition.X = x; // Locates column
    	CursorPosition.Y = y; // Locates Row
	    SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
    }

int main()
{
	char l, file_name[25];
    FILE *fp;
    int k;
	int ch,chh;
	char username[10];
	char password[10];
	char usernamet[10];
	char passwordt[10];
	int m,z;
	bb:
	system("cls");
	system("color 03");
	printf("\n\n\n\n\n\n\n");
	//create "Welcome" window using keyboard keys
	printf("\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  \n");
			printf("\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\\n ");
			printf("\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/\n ");
			printf("\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| \n");
			printf("\n\t\t\t.....==============================================================================.....");
			
		delay(5);	
		system("cls"); // to clear screen after operation done
		
		system("color 0B");	
	
	
	cc:
	//displaying date and time
	printf("\n\t\t\tQuiz Date-%s",__DATE__);
	printf("\n\t\t\tQuiz Time-%s",__TIME__);
	
	//login section
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t------LOGIN--------");
	printf("\n\n\n\t\t\t\t\t\t---------------ENTER FOLLOWING CHOICE---------------");
	printf("\n\n\n\t\t\t\t\t\t================================================================");
	printf("\n\n\t\t\t\t\t\t||\t[1]. Teacher Login\t\t[2].Student Login        ||");
	printf("\n\n\t\t\t\t\t\t=================================================================");
	printf("\n\n\t\t\t\t\tEnter choice:");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		
		jj:
		system("cls");
		system("color 0B");
		printf("\n\n\n\n\n\n\t\t\t\t\t-----------------WELCOME TO TEACHER LOGIN-----------------");
		printf("\n\n\t\t\t\t==================================================================");
		printf("\n\n\n\n\t\t\t\t\tPLEASE ENTER USERNAME:");
	    scanf("%s",&username);
	    printf("\n\n\t\t\t\t\t PLEASE ENTER PASSWORD:");
	   scanf("%s",&password);
		printf("\n\n\t\t\t\t==================================================================");
	        if(strcmp(username, "teacher")==0)
	          {
	        	if(strcmp(password, "tec123")==0)
	   	        	{
	                	system("Color 02");
	   	                printf("\n\n\n\t\t\t\t\tLOGIN IS SUCESSFULL!!!");
	   	                delay(5);	
	   	                system("cls");
					}
	   
	  
	          else
	           {
	   	         system("cls");
	   	         printf("\n\n\n\t\t\t\tPASSWORD IS WRONG!");
	   		     printf("\n\t\t\t\tTRY ONCE AGAIN...");
	   	         goto gg;
	          }
           }

       else
	      {
	   	    printf("\n\t\t\t\tUNSUCESSFULL LOGIN!!");
	   	    exit(0);
	   	  }
	    
		   system("Color 07");	
	
	//Taking student details
	kk:
	 	system("color 0B");
        printf("\n\n\n\n\n\t\t\t\t....ENTER NAME OF FILE YOU WANT TO SEE..........");
        printf("\n\n\n\t\t_______________________________________________________________\n");
        printf("\n\t\t\t\tSUBJECT NAME\t\t\tFILE NAME");
        printf("\n\n\t\t_________________________________________________________________\n\n");
        printf("\t\t[1].For Technical quiz file name is      :   quiz1.txt\n\n");//Create a text file in the same directory/folder for storing student details. add name of file here
        printf("\t\t[2].For Non-technical quiz file name is  :   quiz2.txt\n\n");//four text file created for storing marks of four quizes.
        printf("\t\t[3].For C programming quiz file name is  :   quiz3.txt\n\n");
        printf("\t\t[4].For Math quiz file name is           :   quiz4.txt\n\n\n");
        printf("\n\n\t\t_________________________________________________________________");
        printf("\n\n\n\n\t\t\tEnter your choice:");
        scanf("%s",&file_name);
        system("cls");
        //read data of file
        system("Color 0B");
        fp = fopen(file_name, "r"); // read mode

         if (fp == NULL)
           {
              perror("Error while opening the file.\n");
              exit(EXIT_FAILURE);
          }
   
        printf("\n\n\n\n\n\n\t\t\tENTER USERNAME AND PASSWORD TO OPEN FILE\n\n\n");
   
   q:
	printf("\n\n\t\t\t\tPLEASE ENTER USERNAME:");
	scanf("%s",&usernamet);//Enter user name 
	printf("\n\n\t\t\t\tPLEASE ENTER PASSWORD:");
	scanf("%s",&passwordt);//Enter password
	
	   if(strcmp(usernamet, "staff")==0)//Here username set as staff
	   {
	   	if(strcmp(passwordt, "result@123")==0)// Here password is set as result
	   	
	   	{
	   		system("Color 02");	
	   		system("cls");
	   		printf("\n\n\n\t\t\tLOGIN IS SUCESSFULL!!!"); // user can do further operation if login process done sucessfully
	   	}
	   
	  
	   else
	   {
	   	system("cls");
	   	printf("\n\n\n\n\n\n\t\t\t\tPASSWORD IS WRONG!");//if password is wrong, user have to do login process again
	   	printf("\n\t\t\t\tPLEASE TRY AGAIN!!!!!!!!!\n\n");
	  	goto q;
	   
	   }
      }

       else
	   {
	   	system("color 04");
	   	printf("\n\t\t\tUNSUCESSFULL LOGIN!!"); // if usename and password both are wrong, then user will be exit from quiz
	   	exit(0);
	   }
	//display records of files
	system("cls");
    system("color 0B");
    printf("\n\n\n\n\n\t\t\tSTUDENTS RECORD WHO SOLVED QUIZ\n\n", file_name);
    printf("\n\t=======================================================================\n", file_name);
    printf("\n\t\t   Name\t\t\trollno\t\tmarks\n", file_name);
    printf("\n\t=======================================================================\n", file_name);
    
	while((ch = fgetc(fp)) != EOF)
    printf("%c",ch);
    printf("\n\t_______________________________________________________________________--\n", file_name);
    fclose(fp); // closing file
    delay(5);
    
   vv:
      printf("\n\n\n\tARE YOU WANTS TO CHECK OTHERS FILES:\n\n");
      printf("\n\t\t1. YES\t\t2. NO\n\t\tEnter choice:");
      scanf("%d",&k);
      
      switch(k)
         {
        	case 1:
		        system("cls");
	    	    goto kk;
	    	    break;
		
	       case 2:
		       system("cls");
	           hh:	
	              system("color 0B");
	              printf("\n\n\n\n\n\n\t\t\t\tENTER FOLLOWING KEYS:");
	              printf("\n\n\n\t\t===============================================================");
	              printf("\n\n\t\t\t[1].GOTO HOME PAGE\t\t[2].LOGOUT");
	              printf("\n\n\t\t================================================================");
	              printf("\n\n\n\t\tENTER YOUR CHOICE HERE:");
	              scanf("%d",&z);
	               switch(z)
	                  {
		                 case 1:
			                  goto bb;
			                  break;
			
			             case 2:
				             system("cls");
				             printf("\n\n\n\t\t\tYOU LOGOUT SUCESSFULLY!!!!!!!!!!!!!!!!");
           		             exit(0);
				             break;
				
			           default:
				           printf("\n\t\t\tWRONG CHOICE........\n");
				           goto hh;
				           break;
	                 }
	
	       break;
		
	     default:
		 system("cls");
	     printf("wrong option !");
	     printf("Enter correct choice...........");
	     goto vv;
	     break;
	
	}
			
	break;
			
			
	case 2:
	    system("cls");
		goto ss;
		break;
					
					
	default:
		system("cls");
		printf("\n\n\n\t\t\tWrong option!!!");
		goto cc;
		break;

	}
	
	
 ss:
	//student dashboard
	printf("\n\n\n\n\n\n\t\t\t\t\t\t------STUDENT LOGIN--------");
	printf("\n\t\t\t\t\t===============================================");
	printf("\n\n\n\n\t\t\t\t\t\tPLEASE ENTER USER NAME:");
	scanf("%s",&username);
	printf("\n\n\t\t\t\t\t\tPLEASE ENTER PASSWORD:");
	scanf("%s",&password);
	printf("\n\t\t\t\t\t===============================================\n\n");
	   if(strcmp(username, "student")==0)// Here username is set as result
	   {
	   	if(strcmp(password, "pass1234")==0)// Here password is set as result
	   	{
	   		system("Color 02");	
	   		printf("\n\t\t\t\tLOGIN SUCESSFUL!!!");
	   		delay(5);
	        system("cls");
	   		
	    }
	     else
	      {
	   	    system("cls");
	   	    printf("\n\n\n\t\t\t\tPASSWORD IS WRONG!");//if password is wrong, user have to do login process again
	     	printf("\n\t\t\t\tTRY ONCE AGAIN...");
	   	   goto ss;
	      }
     }

    else
	   {
	   	  printf("\n\t\t\tUNSUCESSFULL LOGIN!!\n\n\t\t\t");
	   	  printf("YOU CAN'T PROCEED FURTHER.....\n\n\n\t\t\t");
	   	  printf("PLEASE TRY AGAIN LATER.....\n\t\t\t");
	      exit(0);
	   	
	   }
	   
	   
	  system("Color 07");
	  system("cls");
      printf("\n\n\n\n\n\n\t\t\t\tWELCOME TO THE WORLD OF QUIZ!!");
      printf("\n\n\n\t\t\t\tPRESS ANY KEY TO PROCEED..........!!");
      getch();
	  system("cls");
	
main:
	
	int i,j,a;
	system("color 06");
	while(chh!=0)
	{
	    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t=========================================================================");
		printf("\n\n\t\t\t\tPlese enter Following keys to proceed:");
		printf("\n\n\n\t\t\t\t[1] Start\t\t[0] Quit:\n\t\t\t\t");
		printf("\n\t\t\t===========================================================================\n\n\t\t\t\t\t Your choice is_ _ _");
		scanf("%d",&chh);
		
		//Instruction of quizes
		switch(chh)
		   {
              case 1:
              system("cls");
	   	      printf("\n");
	          gotoxy(56,4);	
	       	  printf("================INSTRUCTION FOR ENTIRE QUIZES\n\n");
	          gotoxy(50,5);	
	          printf("-----------------READ IT CAREFULLY--------------------\n");
		  mm:
			system("color 02");
	        gotoxy(38,10);	
		    printf("   ________________________________________\n");
		    gotoxy(38,11);
	        printf(" / \\                             	         \\.\n");
	        gotoxy(38,12);
		    printf("|   |                                      |.\n");
		    gotoxy(38,13);
		    printf(" \\_ | Select==>                            |.\n");
	        gotoxy(38,14);
		    printf("    | Press only Valid Opton--> (1,2,2,4)  |.\n");
		    gotoxy(38,15);
	        printf("    | if u Press Other key consider wrong  |.\n");
		    gotoxy(38,16);
	        printf("    | answer.                              |.\n");
		    gotoxy(38,17);
		    printf("    |                            	   	 |.\n");
		    gotoxy(38,18);
		    printf("    | Total quizes=4                       |.\n");
		    gotoxy(38,19);
		    printf("    | question will displayed after 5 sec  |.\n");
		    gotoxy(38,20);
		    printf("    |                            	         |.\n");
	        gotoxy(38,21);
		    printf("    | Points==>                            |.\n");
	        gotoxy(38,22);
		    printf("    | 1 Point will be awarded for each     |.\n");
		    gotoxy(38,23);
		    printf("    | correct answer.                      |.\n");
		    gotoxy(38,24);
		    printf("    |                                      |.\n");
	    	gotoxy(38,25);
		    printf("    | total question==>                    |.\n");
		    gotoxy(38,26);
	        printf("    | 5 for each quiz except math          |.\n");
		    gotoxy(38,27);
		    printf("    | quiz.                                |.\n");
		    gotoxy(38,28);
		    printf("    | Time:10s                             |.\n");
		    gotoxy(38,29);
		    printf("    | Identification==>                    |.\n");
		    gotoxy(38,30);
		    printf("    | Enter Roll Number and Name for Recod |.\n");
		    gotoxy(38,20);
		    printf("    | save                          	 |.\n");
		    gotoxy(38,32);
		    printf("    |   ___________________________________|___\n");
		    gotoxy(38,33);
		    printf("    |  /                                      /.\n");
		    gotoxy(38,34);
		    printf("    \\_/______________________________________/.\n");
	        printf("\n\n\n\n\t\tIf you read all rules then proceed further\n");
	        printf("\n\t\t\t\tPress any key to proceed next...............\n\n\t\t\t\t\t\t");
	        getch();
	        system("cls");
	        system("color 07");
	       printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAIT FOR SECOND............!");    //loading screen
	       printf("\n\n\n\t\t\t\t\t\tQUIZ IS STARTING");
	       for(i=0;i<=6;i++)
	       {
		     for(j=0;j<100000000;j++)
		       a=j;
			   printf(".");
		  }
	     
		 system("cls");
	     goto gg;
	     break;
        
		case 0:
           	printf("\n\n\n\t\t\tBest luck for next time!");
           	exit(0);
           	break;
           	
		default:
           	system("cls");	
           	printf("\n\n\t\t\tWrong choice");
           	printf("\n\t\t\tPlease again enter correct choice from given menu......");
           	break;
        }
    }

	
gg:
	
    printf("\n\n\n\n\n\n\n\t\t\t\t--------------------------Start your quiz---------------------------------------\n");
	//Display menu for quiz
	    while(ch!=7)                                            //menu will display until option is not equal to 4
	   {
	    	label:
	   		system("color 0B");
	    	printf("\n\n\t\t\t\t\t\t\t______________Menu of Quiz____________________");
	    	printf("\n\n\n\t\t\t\t(__________________________________________________________________/");
	    	printf("\n\t\t\t\t___________________________________________________________");
	   	    printf("\n\t\t\t\t(\t\t1:\tQuiz on technical question\t   )\n");
	   	    printf("\t\t\t\t|\t\t2.\tQuiz on non technical questions    |\n");
	   	    printf("\t\t\t\t|\t\t3.\tQuiz on c programs \t\t   |\n");
	   	    printf("\t\t\t\t|\t\t4.\tQuiz on math                   \t   |\n"); 
	   	    printf("\t\t\t\t|\t\t5.\tTo restart quiz\t\t\t   |\n");
	   	    printf("\t\t\t\t|\t\t6.\tTo Go to starting point\t\t   |\n ");
	   	    printf("\t\t\t\t|\t\t7.\tExit                   \t\t   |");
	        printf("\n\t\t\t\t|\t\t\t\t\t\t\t   |\n\t\t\t\t\t\tEnter your option according to menu:                            ");
	        printf("\n\t\t\t\t(_____________________________________________________________)");
	        printf("\n\t\t\t\t______________________________________________________________________/\n\t\t\t\tOption:");
	        scanf("%d",&ch);
	   	 
	   	       switch(ch)
	   	        {
	   	          case 1:
	   	    	     printf("\n\n\t\t\tTechnical Quiz will start in few seconds-------------");
			         quiz1();
			         break;
			     case 2:
			   	     printf("\n\n\t\t\tNon- Technical Quiz will start in few seconds-------------");
			         quiz2();
			         break;
			   	
			   	case 3:
			   	 	printf("\n\n\t\t\tC Programming Quiz will start in few seconds-------------");
				    quiz3();
			        break;
			   case 4:
			     	printf("\n\n\t\t\tMath Quiz will start in few seconds-------------");
				    quiz4();
			        break;
			   case 5:
			    	printf("\n\n\t\tProcessing...........");
			    	delay(5);
	   		        system("cls");
	   	            printf("\n\n\n\n\n\t\t\t\tRestarting quiz!");
	   	        	printf("\n\t\t\t\tWait few seconds......!");
	   			    delay(5);
	   	            system("cls");
	   			    goto main;
			        break;
			  
		      case 6:
		    	   	system("cls");
			    	goto cc;
			    	break;
			   
		       case 7:
		    	   	delay(5);
	            	system("cls");
			   	    printf("\n\n\n\n\n\n\n\t\tTHANKS FOR PARTICIPATION!\n");
			   	    printf("\n\t\tPress enter to logout----------!\n");
			   	    break;
			   	
		    default: 
			    system("cls");
			    printf("\tSorry wrong option!!!!!!!!!!!!!!!!!!\n");
			    printf("\tEnter correct option from given menu\n");
			    break;
	     	}
	     
		}
	return 0;
	}
	   
	   
void delay(int a)
  {
	int add;
	int time;
	int i;
	time=a*1000000000;  
	for(i=0;i<time;i++)
	{
		add*=i;
		add++;
		add++;
	}
  }
	   
	   
	   //Function for quiz 1(technical)
	   void quiz1()
	   {
	   	delay(5);
	   	system("cls");
	   	time_t start, end;
        int seconds;
	   	FILE *fpdo;	
	   	int marks=0;
		int s=30;
	   	int ch;
	   	int option[5];
	   	int correct_answer=1;
	   	int incorrect_answer=0;
	   	char name[50],sname[50];
	   	int p=0;
	   	int Roll_no;
	   	system("color 03");//registration process
	   	printf("\n\n\n\n\n\n\t\t\t\t\t\tTechnical Quiz:");
	   	printf("\n\n\t\t\t\t\t---------------------------------\n");
	   	printf("\n\n\n\t Complete registration process\n\n");
	   	printf("\n\t\t[1]\t Enter your name[name and sirname]:");
	   	scanf("%s%s",name,sname);
	   	printf("\t\t[2]\t Enter your roll no:");
	   	scanf("%d",&Roll_no);
	   	printf(" \n\n\t\t\tRegistration completed sucessfully!");
	   	delay(5);
	   	system("cls");
	   	system("color 02");
	   	printf("\n\n\n\n\n\n\t\t\t\t\t-------------------RULES------------------------\n\n");
	   	printf("\n\n\t\t\t===============================================================================\n");
	   	printf("\n\t\t\t||\tWeicome %s %s to the technical quiz                               ||",name,sname);
	   	printf("\n\t\t\t||\tRules for technical quiz:                                         ||\n");
	   	printf("\t\t\t||\tPlease read carefuly......                                        ||");
	   	printf("\n\t\t\t||\t1.The quiz will consist of 5 questions                            ||\n");
	   	printf("\t\t\t||\t2.For all questions enter correct answer from given options       ||\n");
	   	printf("\t\t\t||\t3.Each question for 1 marks                                       ||\n");
	   	printf("\t\t\t||\t4.Total marks:5                                                   ||\n");
	   	printf("\t\t\t||\t5.Result will display at end                                      ||\n");
	   	printf("\t\t\t||\t6.Time for each ques: 10 sec                                      ||\n");
	    printf("\n\t\t\t===============================================================================");
	   
	   	printf("\n\n\n\t\t\t------------------------------------------------------------------------------------\n");
	   	printf("\n\t\t\t\t-----------------------Best of Luck!------------------------------\n");
	   	printf("\n\n\n\t\t\tIf you have read all rules please enter any key t proceed............\n\t\t\t");
	   	getch();
	   	system("color 07");
	    system("cls");
	    start = time (NULL);

	   	    printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 1 OUT OF 5................\n");
	   	    printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	   	    printf("\n\t\t\t\tQuestion 1:\n\t\t\t\t Which of the following is passive component\n");
	     	printf("\t\t\t\t\t1.Diode      \n\t\t\t\t\t2.Transistor    \n\t\t\t\t\t3.MOSFET      \n\t\t\t\t\t4.Resistor\n");
	     	 printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	     	printf("\n\t\t\t\tEnter your answer number here:");
	     	 
	   	    scanf("%d",&option[0]);
	   		end = time (NULL);
           seconds = end - start;


             if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
                getch();
                system("cls");
                goto label;
			}
	     	if(option[0]==4)
	     	{
	     		system("Color 02");
	   	    	printf("\t\t\t\tYour answer is correct !\n");
	   	    	printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	    	marks++;
		    }
		    else
		     {
		     	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    printf("\n\t\t\t\tCorrect answer number is %d",4);
		    p++;	
		     }
		   	delay(5);
	   		system("cls");
	   			system("Color 07");
	   			start = time (NULL); //starting of timer
	   			printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 2 OUT OF 5................\n");
	   	        printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	   	        printf("\n\t\t\t\tQuestion 2:\n\t\t\t\t Which of the following is main part of communication system\n");
	        	printf("\t\t\t\t\t1.Transmitter               \n\t\t\t\t\t2.Reciever   \n\t\t\t\t\t3.Communication medium      \n\t\t\t\t\t4.All 1,2,3\n");
	        	 printf("\n\t\t\t\t----------------------------------------------------------------------\n");
				printf("\n\t\t\t\tEnter your answer number here:");
	        	scanf("%d",&option[1]);
	        		
		      end = time (NULL);
              seconds = end - start;
              if (seconds >10)  //if user taok more than 10 seconds to enter answer       
                {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			    }
			    
	           if(option[1]==4)
	           	{
	           		system("Color 02");
	   	        	printf("\t\t\t\tYour answer is correct !\n");
	   	        	printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	        	marks++;
		        }
		       else
		        {
		           system("Color 04");
		    	   printf("\t\t\t\tUFF your answer is wrong!\n");
		    	   printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    	   printf("\n\t\t\t\tCorrect answer number is %d",4);
		    	   p++;
		        }
		       delay(5);// delay of 5 sec to move further operation
	   		   system("cls");
			   system("Color 07");
			   
			start = time (NULL);
			printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 3 OUT OF 5................\n");
	   	    printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	   	    printf("\n\t\t\t\tQuestion 3:\n\t\t\t\tsampling method which is mostly used  is\n");
	   	    printf("\t\t\t\t\t1.Ideal    \n\t\t\t\t\t2.Practical    \n\t\t\t\t\t3.Flat top     \n\t\t\t\t\t4.Natural\n");
	   	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
			printf("\n\t\t\t\tEnter your answer number here:");
	        scanf("%d",&option[2]);
	        
			end = time (NULL);
            seconds = end - start;
           if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
			
	      if(option[2]==3)
	    	{
	    	system("Color 02");
	   		printf("\t\t\t\tYour answer is correct !\n");
	   		printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   		marks++;
	   	
		    }
		    
		else
		   {
		   	system("Color 04");
		   	printf("\t\t\t\tUFF your answer is wrong!\n");
		   	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   	printf("\n\t\t\t\tCorrect answer number is %d",3);
		   	p++;
		   }
		   
		   delay(5);
	   	   system("cls");
	   	   system("Color 07");
	   		
		    start = time (NULL);
	   		printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 4 OUT OF 5................\n");
	   	    printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	   	    printf("\n\t\t\t\tQuestion 4:\n\t\t\t\tWhich of the following component is used for amplification\n");
	   	    printf("\t\t\t\t\t1.Transistor    \n\t\t\t\t\t2.Resistor    \n\t\t\t\t\t3.Inductor     \n\t\t\t\t\t4.Capacitorl\n");
	   	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
			printf("\n\t\t\t\tEnter your answer number here:");
			scanf("%d",&option[3]);
			
		   end = time (NULL);
           seconds = end - start;


             if (seconds >10)         
               {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			   }
			
	    	 if(option[3]==1)
	    	   {
	    		system("Color 02");
	   	    	printf("\t\t\t\tYour answer is correct !\n");
	   		    printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	    	marks++;
	   	       }
		   
		   else
		      {
		     	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    	printf("\n\t\t\t\tCorrect answer number is %d",1);
		    	p++;
		     }
		     
			delay(5);
	   		system("cls");
			system("Color 07");
			
			start = time (NULL); 
			printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 5 OUT OF 5................\n");
	   	    printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	   	    printf("\n\n\n\t\t\t\tQuestion 5:\n\t\t\t\tTypes of communication are \n");
	   	    printf("\t\t\t\t\t1.Full duplex    \n\t\t\t\t\t2.Simplex   \n\t\t\t\t\t3.Half duplex     \n\t\t\t\t\t4.All 1,2,3\n");
	   	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
			printf("\n\t\t\t\tEnter your answer number here:");
	        scanf("%d",&option[4]);
	    
		   end = time (NULL);
           seconds = end - start;
              if (seconds >10)         
              {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			  }
			  
	    	if(option[4]==4)
	    	 {
	    	   system("Color 02");
	   		   printf("\t\t\t\tYour answer is correct !\n");
	   		   printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   		   marks++;
	   	    }
	   	    
		   else
		     {
		   	   system("Color 04");
		   	   printf("\t\t\t\tUFF your answer is wrong!\n");
		   	   printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   	   printf("\n\t\t\t\tCorrect answer number is %d",4);
		   	   p++;	
			}
			//stored record of quiz1 in file
			fpdo=fopen("quiz1.txt","a");
	          if(fpdo==NULL)
	           {
		         printf("Error in creating file");
		         exit(1);
	           } 
	
	          fprintf(fpdo,"\n\t%10s %10s\t\t%2d\t\t%d/5",name,sname,Roll_no,marks);
	          fclose(fpdo);
			
		   delay(5);
	   	   system("cls");
		   system("Color 07");
		   
	   	printf("\n\n\n\n\n\t\t\t\t!!!!Thanks for playing techical quiz!!!!");
		
	while(ch!=3||6)
		  {
		  	
		   printf("\n\n\t\tAre you wants to continue or not please enter following to proceed further");
		   printf("\n\n\t\t[1].Result of technical quiz\t\t[2]Continue\t\t[3].exit\n\n\t\t");
		   scanf("%d",&ch);
		  	switch(ch)
		  	{
		  			case 3:
		  			   system("cls");
		  			   printf("\n\n\n\n\n\n\n\n\t\t\t\t\t.........THANK TOU FOR PARTICIPATION.........");
					   printf("\n\n\n\t\t\t\t\tPress any key to log out----------\n\n ");
					   exit(0);
		  			   break;
		  		
				  //Quiz 2- Technical Quiz   
				  case 2:
				     system("cls");
				  	 int chh;
		            	while(chh!=6)                                            //menu will display until option is not equal to 4
	                      {
	   	                    label:
	   		                system("color 0B");
	   	                    printf("\n\n\n\n\n\n\n\t\t\t\t------Menu of Quiz-----\n\n");
	   		                printf("\n\n\n\t\t\t\t(__________________________________________________________________/");
	   	                    printf("\n\t\t\t\t___________________________________________________________");
	   	                    printf("\n\t\t\t\t(\t\t1:\tQuiz on technical question\t   )\n");
	   	                    printf("\t\t\t\t|\t\t2.\tQuiz on non technical questions    |\n");
	   	                    printf("\t\t\t\t|\t\t3.\tQuiz on c programs \t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t4.\tQuiz on math                   \t   |\n"); 
	   	                    printf("\t\t\t\t|\t\t5.\tTo continue quiz\t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t6.\tExit                   \t\t   |");
	                        printf("\n\t\t\t\t|\t\t\t\t\t\t\t   |\n\t\t\t\t\t\tEnter your option according to menu:                            ");
	                        printf("\n\t\t\t\t(_____________________________________________________________)");
	                        printf("\n\t\t\t\t______________________________________________________________________/\n\n\t\t\tOption:");
	   
	   	                    scanf("%d",&chh);
	   	                         switch(chh)
	   	                           {
	   	                              case 1:
	   	    	                            printf("\n\n\t\t\tTechnical Quiz will start in few seconds-------------");
			                                quiz1();
			                                break;
			                          
			                          case 2:
			   	                            printf("\n\n\t\t\tNon-Technical Quiz will start in few seconds-------------");
			                                quiz2();
			                                break;
			   	
			   	                      case 3:
			   		                         printf("\n\n\t\t\tC programming will start in few seconds-------------");
				                             quiz3();
			                                break;
			                          
			                          case 4:
			   	                             printf("\n\n\t\t\tMath Quiz will start in few seconds-------------");
				                             quiz4();
			                                  break;
			                          
                        			 case 5:
			                         	    system("cls");
			                                printf("\n\n\n\n\n\n\n\t\tPROCESSING!\n");
			   	                            delay(5);
			   	                            system("cls");
			   	                            goto label;
			                                break;
			                         
									  case 6:
			   	                             system("cls");
			                                 printf("\n\n\n\n\n\n\n\t\tTHANKS FOR PARTICIPATION!\n");
			                            	 printf("\n\t\tPress enter to logout----------!\n");
			   	                             exit(0);
			   	                             break;
			                         
									 default: 
			                                printf("\tSorry wrong option!!!!!!!!!!!!!!!!!!\n");
			                                printf("\tEnter correct option from given menu\n");
			                                break;
	     	                       }
	     
		                    }
		  			break;
		  			
		  		//Displaying result
		  		case 1:
		  			system("cls");
		  	        system("color 04");
                    gotoxy(0,3);
		            printf(" \n\n\n\n\t\t\t");
	                printf("  _____                 _ _   \n");
	                gotoxy(0,4);
	                printf(" |  __ \\               | | |  \n ");
	                gotoxy(0,5);
	                printf(" | |__) |___  ___ _   _| | |_ \n ");
	                gotoxy(0,6);
                    printf(" |  _  // _ \\/ __| | | | | __|\n ");
	                gotoxy(0,7);
	                printf(" | | \\ \\  __/\\__ \\ |_| | | |_ \n ");
	                gotoxy(0,8);
	                printf(" |_|  \\_\\___||___/\\__,_|_|\\__|\n ");
	
	               system("color 06");
                   gotoxy(s,1);
                   printf("                     ,---.           ,---.   \n ");
                   gotoxy(s,2);
                   printf("                    / /^`.\\.--''''-./,'^\\ \\	\n ");
                   gotoxy(s,3);
                   printf("                    \\ \\    _       _    / /	\n ");
                   gotoxy(s,4);
                   printf("                     `./  / __   __ \\  \\,'	\n ");
                   gotoxy(s,5);
                   printf("                      /    /_O)_(_O\\    \\	\n ");
                   gotoxy(s,6);
                   printf("                      |  .-'  ___  `-.  |	\n ");
                   gotoxy(s,7);
                   printf("                   .--|       \\_/       |--.	\n ");
                   gotoxy(s,8);
                   printf("                 ,'    \\   \\   |   /   /    `.\n ");
                   gotoxy(s,9);
                   printf("                /       `.  `--^--'  ,'       \\\n ");
                   gotoxy(s,10);
                   printf("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n ");
                   gotoxy(s,11);
                   printf(".-----------/         \\------------------/         \\--------------.\n ");
                   gotoxy(s,12);
                   printf("| .---------\\         /----------------- \\         /------------. |\n ");
                   gotoxy(s,13);
                   printf("| |          `-`--`--'                    `--'--'-'             | |\n ");
                   gotoxy(s,14);
                   printf("| |                                                             | |\n ");
                   gotoxy(s,15);
                   printf("| |                                                             | |\n ");
                   gotoxy(s,16);
                   printf("| |                                                             | |\n ");
                   gotoxy(s,17);
                   printf("| |                                                             | |\n ");
                   gotoxy(s,18);
                   printf("| |_____________________________________________________________| |\n ");
                   gotoxy(s,19);
                   printf("|_________________________________________________________________|\n ");
                   gotoxy(s,20);
                   printf("                   )__________|__|__________(\n ");
                   gotoxy(s,21);
                   printf("                  |            ||            |\n ");
                   gotoxy(s,22);
                   printf("                  |____________||____________|\n ");
                   gotoxy(s,23);
                   printf("                    ),-----.(      ),-----.(\n ");
                   gotoxy(s,24);
                   printf("                  ,'   ==.   \\    /  .==    `.\n ");
                   gotoxy(s,25);
                   printf("                 /            )  (            \\\n ");
                   gotoxy(s,26);
                   printf("                 `==========='    `==========='  \n ");
	               system("color 06");
	               gotoxy(35,14);
	               printf("Name ==>%s %s",name, sname);
	               system("color 06");
	               gotoxy(70,14);
                   printf("Roll No ==>%d ",Roll_no);
	               system("color 06");
	               gotoxy(35,15);
	               printf("Total Score ==> 5");
	               gotoxy(70,15);
	               printf("Your Score ==> %d",marks);
	               system("color 06");
	               gotoxy(35,16);
	               printf("Wrong answer ==>%d ",p);
	                    if(marks==5){
	                       gotoxy(70,16);
	                       printf("Grade ==> A+");
                          } 
                          
                       else if(marks>=2&& marks<=4)
                        {
                          gotoxy(70,16);
	                      printf("Grade ==>A ");	
                        }
                     else 
                      {
                         gotoxy(70,16);
	                     printf("Grade ==> C");	
                      }


                   system("color 06");
                   if(marks>=3)
                    {
	                 gotoxy(35,17);
                     printf("Comments==> Good Marks! ");
                    }

                else
                {
	         	gotoxy(35,17);
                printf("Comments==> Do hard work! ");
                }

			  PlaySound(TEXT("new music.WAV"),NULL,SND_SYNC);
	          delay(5);
	          system("cls");
	          system("color 07");
	          printf("\n\n\n\n\n\n\n\n\n\t\t\tPress any key to proceed......... ");	   getch();
			  system("cls");	
		  		
			break;
		  				
						  
		default:
		  		printf("\t\twrong option!");
		  		break;
		  					
			}
		}
		  
	
	delay(5);
	system("cls");
 
   }
   
   
     //Function for quiz 2
	    void quiz2()
	   {
	   	delay(5);
	   	system("cls");
	   	time_t start, end;
        int seconds;
	   	FILE *fpdo;
		int s=30;
		int p=0;	
	   	int ch;
	   	int marks=0;
	   	int correct_answer=1;
	   	int incorrect_answer=0;
	   	int option[5];
	   	char name[20],sname[50];
	   	int Roll_no;
	   	system("color 02");
	   	printf("\n\n\n\n\n\t\t\t\t\t\tNon-Technical Quiz:");
	   	printf("\n\t\t\t\t\t----------------------------------------\n");
	   	printf("\n\n\n\n\t Complete registration process\n\n");
	   	printf("\n\t\t[1]\t Enter your name[name and sirname]:");
	   	scanf("%s%s",name,sname);
	   	printf("\t\t[2]\t Enter your roll no:");
	   	scanf("%d",&Roll_no);
	   	printf(" \n\n\t\t\tRegistration completed sucessfully!");
	   	delay(5);
	   	system("cls");
	   	system("color 06");
	   	printf("\n\n\n\n\n\n\t\t\t\t\t-------------------RULES------------------------\n\n");
	   	printf("\n\n\t\t\t===============================================================================\n");
	   	printf("\n\t\t\t||\tWeicome %s %s to the Non technical quiz                            ||",name,sname);
	   	printf("\n\t\t\t||\tRules for non technical quiz:                                        ||\n");
	   	printf("\t\t\t||\tPlease read carefuly.........                                        ||");
	   	printf("\n\t\t\t||\t1.The quiz will consist of 5 questions                               ||\n");
	   	printf("\t\t\t||\t2.For all questions enter correct answer from given options          ||\n");
	   	printf("\t\t\t||\t3.Each question for 1 marks                                          ||\n");
	   	printf("\t\t\t||\t4.Total marks:5                                                      ||\n");
	   	printf("\t\t\t||\t5.Result will display at end                                         ||\n");
	   	printf("\t\t\t||\t6.Time for each ques: 10 sec                                      ||\n");
	  
	   	printf("\n\t\t\t===============================================================================");
	   
	   	printf("\n\n\n\t\t\t------------------------------------------------------------------------------------\n");
	   	printf("\n\t\t\t\t-----------------------Best of Luck!------------------------------\n");
	   	printf("\n\n\n\t\t\tIf you have read all rules please enter any key t proceed............\n\t\t\t");
	   	getch();
	    system("color 07");
	    system("cls");
	    
		start = time (NULL);
	   	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 1 OUT OF 5................\n");
	   	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	    printf("\n\t\t\t\tQuestion 1:\n\t\t\t\tCapital of india is\n");
	    printf("\t\t\t\t\t1.Mumbai    \n\t\t\t\t\t2.Nagapur    \n\t\t\t\t\t3.Gujrat      \n\t\t\t\t\t4.Delhi\n");
	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
		printf("\n\t\t\t\tEnter your answer number here:");
	   	scanf("%d",&option[0]);
	   	end = time (NULL);
        seconds = end - start;
        if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	    if(option[0]==4)
	     	{
	     		system("Color 02");
	   	    	printf("\t\t\t\tYour answer is correct !\n");
	   	    	printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	    	marks++;
		    }
		else
		   {
		     	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		        printf("\n\t\t\t\tCorrect answer number is %d",4);
		    	p++;
		    }
		delay(5);
	   	system("cls");
	   	system("Color 07");
	   	
		start = time (NULL);
	   	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 2 OUT OF 5................\n");
	   	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	    printf("\n\t\t\t\tQuestion 2:\n\t\t\t\t Which of the following is national bird of india\n");
	    printf("\t\t\t\t\t1.Parrot   \n\t\t\t\t\t2.Parrot    \n\t\t\t\t\t3.Penguin     \n\t\t\t\t\t4.Peacock\n");
	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
		printf("\n\t\t\t\tEnter your answer number here:");
	    scanf("%d",&option[1]);
	    end = time (NULL);
        seconds = end - start;
        if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
                system("cls");
				goto label;
			}
	    if(option[1]==4)
	        {
	           	system("Color 02");
	   	        printf("\t\t\t\tYour answer is correct !\n");
	   	        printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	        marks++;
		    }
		else
		    {
		        system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    	printf("\n\t\t\t\tCorrect answer number is %d",4);
		    	p++;
		    }
		delay(5);
	   	system("cls");
	   	system("Color 07");
	   	
		start = time (NULL);
	   	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 3 OUT OF 5................\n");
	   	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	    printf("\n\t\t\t\tQuestion 3:\n\t\t\t\tFirst primeminister of INDIA\n");
	   	printf("\t\t\t\t\t1.Rajiv Gandhi   \n\t\t\t\t\t2.Pandit Jawaharlal Neharu         \n\t\t\t\t\t3.Indira Gandhi     \n\t\t\t\t\t4.Manmohan Gandhi\n");
	   	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
		printf("\n\t\t\t\tEnter your answer number here:");
	    scanf("%d",&option[2]);
	    end = time (NULL);
        seconds = end - start;
        if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	    if(option[2]==2)
	    	{
	    		system("Color 02");
	   	     	printf("\t\t\t\tYour answer is correct !\n");
	   			printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   			marks++;
		    }
		else
		   {
		   	    system("Color 04");
		   	    printf("\t\t\t\tUFF your answer is wrong!\n");
		   		printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   		printf("\n\t\t\t\tCorrect answer number is %d",2);
		   		p++;
		   }
		delay(5);
	   	system("cls");
	   	system("Color 07");
	   	
		start = time (NULL);
	   	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 4 OUT OF 5................\n");
	   	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	    printf("\n\t\t\t\tQuestion 4:\n\t\t\t\tAt which date primeminister of INDIA announce first lockdown\n");
	   	printf("\t\t\t\t\t1.24 March 2020     \n\t\t\t\t\t2.25 March 2020    \n\t\t\t\t\t3.26 March 2020     \n\t\t\t\t\t4.27 March 2020 \n");
	   	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
		printf("\n\t\t\t\tEnter your answer number here:");
	    scanf("%d",&option[3]);
	    
		end = time (NULL);
       seconds = end - start;
        if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	    if(option[3]==2)
	    	{
	    		system("Color 02");
	   	    	printf("\t\t\t\tYour answer is correct !\n");
	   			printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   			marks++;
		    }
		else
		   {
		     	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		   		printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   		printf("\n\t\t\t\tCorrect answer number is %d",2);
		   		p++;
		   }
		   
	delay(5);
	system("cls");
	system("Color 07");
	   		
	start = time (NULL);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 5 OUT OF 5................\n");
	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tQuestion 5:\n\t\t\t\tCity which is known for culture\n");
	printf("\t\t\t\t\t1.Mumbai     \n\t\t\t\t\t2.Pune   \n\t\t\t\t\t3.Kolhapur   \n\t\t\t\t\t4.Nagpur  \n");
	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tEnter your answer number here:");
	scanf("%d",&option[4]);
	        	
	end = time (NULL);
    seconds = end - start;
    if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	if(option[4]==2)
	    	{
	    		system("Color 02");
	    		printf("\t\t\t\tYour answer is correct !\n");
	   			printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   			marks++;
		    }
	else
		  {
		    	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		   		printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   		printf("\n\t\t\t\tCorrect answer number is %d",2);
		   		p++;
		   }
		   
		fpdo=fopen("quiz2.txt","a");
	    if(fpdo==NULL)
	      {
		    printf("Error in creating file");
		    exit(1);
	     }   
	
        fprintf(fpdo,"\n\t%10s %10s\t\t%2d\t\t%d/5",name,sname,Roll_no,marks); // Adding details of student into file
     	fclose(fpdo);
	    
		
	delay(5);
	system("cls");
	system("Color 07");
	printf("\n\n\n\n\n\t\t\t\t!!!!Thanks for playing Non-techical quiz!!!!");
	  
	while(ch!=3||6)
		  {
		  	
	     	 printf("\n\n\t\tAre you wants to continue or not please enter following to proceed further");
		    printf("\n\n\t\t[1].Result of non-technical quiz\t\t[2]Continue\t\t[3].exit\n\n\t\t");
		    scanf("%d",&ch);
		  	  switch(ch)
		    	{
		  			case 3:
		  			    system("cls");
		  				printf("\n\n\n\n\n\n\n\n\t\t\t\t\t.........THANK TOU FOR PARTICIPATION.........");
						printf("\n\n\n\t\t\t\t\tPress any key to log out----------\n\n ");
						exit(0);
		  			    break;
				  
				  case 2:
				  		system("cls");
				  	    int chh;
		  	            while(chh!=6)                                            //menu will display until option is not equal to 4
	                     {
	   	                   label:
	                    	system("color 0B");
	   	                    printf("\n\n\n\n\n\n\n\t\t\t\t------Menu of Quiz-----\n\n");
	   		                printf("\n\n\n\t\t\t\t(__________________________________________________________________/");
	   	                    printf("\n\t\t\t\t___________________________________________________________");
	   	                    printf("\n\t\t\t\t(\t\t1:\tQuiz on technical question\t   )\n");
	   	                    printf("\t\t\t\t|\t\t2.\tQuiz on non technical questions    |\n");
	   	                    printf("\t\t\t\t|\t\t3.\tQuiz on c programs \t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t4.\tQuiz on math                   \t   |\n"); 
	   	                    printf("\t\t\t\t|\t\t5.\tTo continue quiz\t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t6.\tExit                   \t\t   |");
	                        printf("\n\t\t\t\t|\t\t\t\t\t\t\t   |\n\t\t\t\t\t\tEnter your option according to menu:                            ");
	                       printf("\n\t\t\t\t(_____________________________________________________________)");
	                       printf("\n\t\t\t\t______________________________________________________________________/\n\n\t\t\tOption:");
	                   	scanf("%d",&chh);
	   	                  switch(chh)
	   	                    {
	   	                        case 1:
	   	    	                     printf("\n\n\t\t\tTechnical Quiz will start in few seconds-------------");
			                         quiz1();
			                          break;
			   
			                  case 2:
			                    	printf("\n\n\t\t\tNon-Technical Quiz will start in few seconds-------------");
			                        quiz2();
			                        break;
			   	
			             	case 3:
			   	                	printf("\n\n\t\t\tC programming Quiz will start in few seconds-------------");
				                    quiz3();
			                        break;
			                        case 4:
			                    	printf("\n\n\t\t\tMath Quiz will start in few seconds-------------");
				                    quiz4();
			                        break;
			              case 5:
			   	                 system("cls");
			   	                 printf("\n\n\n\n\n\n\n\t\tPROCESSING!\n");
			   	                 delay(5);
			   	                 system("cls");
			   	                 goto label;
			                     break;
			                     
			              case 6:
			   	                system("cls");
			   	                printf("\n\n\n\n\n\n\n\t\tTHANKS FOR PARTICIPATION!\n");
			   	                printf("\n\t\tPress enter to logout----------!\n");
								exit(0);
								break;
			   	
			   
			           default: 
			                 printf("\tSorry wrong option!!!!!!!!!!!!!!!!!!\n");
			                 printf("\tEnter correct option from given menu\n");
			                 break;
	     	   }
	     
		  }
		break;
		  			
		  		
		  			
					  
		        case 1:
		  					
				    system("cls");
		  	        system("color 0B");
	                gotoxy(0,3);
	            	printf(" \n\n\n\n\t\t\t");
	                printf("  _____                 _ _   \n");
	                gotoxy(0,4);
	                printf(" |  __ \\               | | |  \n ");
	                gotoxy(0,5);
	                printf(" | |__) |___  ___ _   _| | |_ \n ");
	                gotoxy(0,6);
                    printf(" |  _  // _ \\/ __| | | | | __|\n ");
                	gotoxy(0,7);
	                printf(" | | \\ \\  __/\\__ \\ |_| | | |_ \n ");
	               gotoxy(0,8);
	               printf(" |_|  \\_\\___||___/\\__,_|_|\\__|\n ");
                  
				  system("color 0B");
                  gotoxy(s,1);
                  printf("                     ,---.           ,---.   \n ");
                  gotoxy(s,2);
                  printf("                    / /^`.\\.--''''-./,'^\\ \\	\n ");
                  gotoxy(s,3);
                  printf("                    \\ \\    _       _    / /	\n ");
                  gotoxy(s,4);
                  printf("                     `./  / __   __ \\  \\,'	\n ");
                  gotoxy(s,5);
                  printf("                      /    /_O)_(_O\\    \\	\n ");
                  gotoxy(s,6);
                  printf("                      |  .-'  ___  `-.  |	\n ");
                  gotoxy(s,7);
                  printf("                   .--|       \\_/       |--.	\n ");
                  gotoxy(s,8);
                  printf("                 ,'    \\   \\   |   /   /    `.\n ");
                  gotoxy(s,9);
                  printf("                /       `.  `--^--'  ,'       \\\n ");
                  gotoxy(s,10);
                  printf("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n ");
                  gotoxy(s,11);
                  printf(".-----------/         \\------------------/         \\--------------.\n ");
                  gotoxy(s,12);
                  printf("| .---------\\         /----------------- \\         /------------. |\n ");
                  gotoxy(s,13);
                  printf("| |          `-`--`--'                    `--'--'-'             | |\n ");
                  gotoxy(s,14);
                  printf("| |                                                             | |\n ");
                  gotoxy(s,15);
                  printf("| |                                                             | |\n ");
                  gotoxy(s,16);
                  printf("| |                                                             | |\n ");
                  gotoxy(s,17);
                  printf("| |                                                             | |\n ");
                  gotoxy(s,18);
                  printf("| |_____________________________________________________________| |\n ");
                  gotoxy(s,19);
                  printf("|_________________________________________________________________|\n ");
                  gotoxy(s,20);
                  printf("                   )__________|__|__________(\n ");
                  gotoxy(s,21);
                  printf("                  |            ||            |\n ");
                  gotoxy(s,22);
                  printf("                  |____________||____________|\n ");
                  gotoxy(s,23);
                  printf("                    ),-----.(      ),-----.(\n ");
                  gotoxy(s,24);
                  printf("                  ,'   ==.   \\    /  .==    `.\n ");
                  gotoxy(s,25);
                  printf("                 /            )  (            \\\n ");
                  gotoxy(s,26);
                  printf("                 `==========='    `==========='  \n ");
	              system("color 0B");
	              gotoxy(35,14);
	              printf("Name ==>%s %s",name, sname);
               	  system("color 0B");
	              gotoxy(70,14);
	              printf("Roll No ==>%d ",Roll_no);
	            system("color 0B");
	             gotoxy(35,15);
	            printf("Total Score ==> 5");
	            gotoxy(70,15);
	            printf("Your Score ==> %d",marks);
	            system("color 0B");
	            gotoxy(35,16);
                printf("Wrong answer ==>%d ",p);
	           if(marks==5){
	          	gotoxy(70,16);
	            printf("Grade ==> A+");
				}
            else if(marks>=2&& marks<=4)
              {
               gotoxy(70,16);
	          printf("Grade ==>A ");	
             }
          else 
            {
             gotoxy(70,16);
	         printf("Grade ==> C");	
           }
   
              system("color 0B");
              if(marks>=3)
                { 
	             gotoxy(35,17);
                 printf("Comments==> Good Marks! ");
               }
           else
            {
		      gotoxy(35,17);
              printf("Comments==> Do hard work! ");
            }

		PlaySound(TEXT("new music.WAV"),NULL,SND_SYNC);
	    delay(5);
	    system("cls");
	    system("color 07");
	    printf("\n\n\n\n\n\n\n\n\n\t\t\tPress any key to proceed......... ");
		getch();
		system("cls");	
		
		break;
	
	default:
	     printf("\t\twrong option!");
		 break;
			 
			  }
		  }
	 

		delay(5);
	   	system("cls");
	   }
	   
	   
	   void quiz3()
	   {
	   	delay(5);
	   	system("cls");
	   	time_t start, end;
        int seconds;
	    int s=30;
	   	int p=0;
	   	FILE *fpdo;	
	   	int ch;
	   	int marks=0;
	   	int correct_answer=1;
	   	int incorrect_answer=0;
	   	int option[3];
	   	char name[20],sname[50];
	   	int Roll_no;
	   	
	   	system("color 0A");
	   	printf("\n\n\t\t\t\tC programming Quiz:");
	   	printf("\n\t\t\t-----------------------------------\n");
	   	printf("\n\n\n\t Complete registration process\n\n");
	    printf("\n\t\t[1]\t Enter your name[name and sirname]:");
	   	scanf("%s%s",name,sname);
	   	printf("\t\t[2]\t Enter your roll no:");
	   	scanf("%d",&Roll_no);
	   	printf(" \n\n\t\t\tRegistration completed sucessfully!");
	   	delay(5);
	   	system("cls");
	   	system("color 02");
	   	printf("\n\n\n\n\n\n\t\t\t\t\t-------------------RULES------------------------\n\n");
	   	printf("\n\n\t\t\t===============================================================================\n");
	   	printf("\n\t\t\t||\tWeicome %s %s to the Cprogram quiz                                ||",name,sname);
	   	printf("\n\t\t\t||\tRules for technical quiz:                                         ||\n");
	   	printf("\t\t\t||\tPlease read carefuly......                                        ||");
	   	printf("\n\t\t\t||\t1.The quiz will consist of 5 questions                            ||\n");
	   	printf("\t\t\t||\t2.For all questions enter correct answer from given options       ||\n");
	   	printf("\t\t\t||\t3.Each question for 1 marks                                       ||\n");
	   	printf("\t\t\t||\t4.Total marks:5                                                   ||\n");
	   	printf("\t\t\t||\t5.Result will display at end                                      ||\n");
	   	printf("\t\t\t||\t6.Time for each ques: 10 sec                                      ||\n");
	  	printf("\n\t\t\t===============================================================================");
	   
	   	printf("\n\n\n\t\t\t------------------------------------------------------------------------------------\n");
	   	printf("\n\t\t\t\t-----------------------Best of Luck!------------------------------\n");
	   	printf("\n\n\n\t\t\tIf you have read all rules please enter any key t proceed............\n\t\t\t");
	   	getch();
	   	system("color 07");
	   system("cls");
	   	
		start = time (NULL);
	    printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 1 OUT OF 5................\n");
	   	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	    printf("\n\t\t\t\tQuestion 1:\n\t\t\t\tTypes of loops in C\n");
	    printf("\t\t\t\t\t1.For loop   \n\t\t\t\t\t2.While loop    \n\t\t\t\t\t3.Nested loop      \n\t\t\t\t\t4.All 1,2,3\n");
	    printf("\n\t\t\t\t----------------------------------------------------------------------\n");
		printf("\n\t\t\t\tEnter your answer number here:");
	   	scanf("%d",&option[0]);
	   	    
		end = time (NULL);
        seconds = end - start;
        if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
                system("cls");
                goto label;
			}
	    if(option[0]==4)
	     	{
	     		system("Color 02");
	   	    	printf("\t\t\t\tYour answer is correct !\n");
	   	    	printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	    	marks++;
		    }
	    else
		     {
		     	system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    	printf("\n\t\t\t\tCorrect answer number is %d",4);
		    	p++;
		     }
		   	
	delay(5);
	system("cls");
	system("Color 07");
	   		    
	start = time (NULL);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 2 OUT OF 5................\n");
	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tQuestion 2:\n\t\t\t\tWhich of the following is not data types\n");
	printf("\t\t\t\t\t1.Integer  \n\t\t\t\t\t2.Float    \n\t\t\t\t\t3.Character     \n\t\t\t\t\t4.Read\n");
	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tEnter your answer number here:");
	scanf("%d",&option[1]);
	end = time (NULL);
    seconds = end - start;
    if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	if(option[1]==4)
	    {
	       system("Color 02");
	   	   printf("\t\t\t\tYour answer is correct !\n");
	   	   printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	   marks++;
		 }
	else
		{
		        system("Color 04");
		    	printf("\t\t\t\tUFF your answer is wrong!\n");
		    	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		    	printf("\n\t\t\t\tCorrect answer number is %d",4);
		        p++;
		}
		       
	delay(5);
	system("cls"); 
	system("Color 07");
	start = time (NULL);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 3 OUT OF 5................\n");
	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tQuestion 3:\n\t\t\t\tA=10; Name of the operator used in examples is\n");
	printf("\t\t\t\t\t1.Increament operator   \n\t\t\t\t\t2.Conditional Operator    \n\t\t\t\t\t3.Decreament Operator     \n\t\t\t\t\t4.Assignment Operator\n");
	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tEnter your answer number here:");
	scanf("%d",&option[2]);
 	end = time (NULL);
    seconds = end - start;
    if (seconds >10)         
      {
          system("cls");
          system("Color 04");
          printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
          getch();
          system("cls");
          goto label;
	}
	if(option[2]==4)
	{
	        system("Color 02");
	   		printf("\t\t\t\tYour answer is correct !\n");
	   		printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   		marks++;
	}
	else
	 {
		   	system("Color 04");
		   	printf("\t\t\t\tUFF your answer is wrong!\n");
		   	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   	printf("\n\t\t\t\tCorrect answer number is %d",4);
		   	p++;
	 }
		  
    delay(5);
	system("cls");
	system("Color 07");
	start = time (NULL);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 4 OUT OF 5................\n");
	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tQuestion 4:\n\t\t\t\tPrintf is used to display output and scanf is used to read input -True or false \n");
	printf("\t\t\t\t\t1.True   \n\t\t\t\t\t2.False   \n\t\t\t\t\t3.None     \n\t\t\t\t\t4.All\n");
	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tEnter your answer number here:");
	scanf("%d",&option[3]);
	
	end = time (NULL);
    seconds = end - start;
    if (seconds >10)         
      {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
                system("cls");
                goto label;
	  }
  	if(option[3]==1)
	    	{
	    		system("Color 02");
     	   		printf("\t\t\t\tYour answer is correct !\n");
     	   		printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	     		marks++;
		    }
			
	   else
		   {
		   	system("Color 04");
		   	printf("\t\t\t\tUFF your answer is wrong!\n");
		   	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   	printf("\n\t\t\t\tCorrect answer number is %d",1);
		   	p++;
		   }
		  
	delay(5);
	system("cls");
	system("Color 07");
	
	start = time (NULL);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION 5 OUT OF 5................\n");
	printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\n\t\t\t\tQuestion 5:\n\t\t\t\tC is -----level language\n");
	printf("\t\t\t\t\t1.High  \n\t\t\t\t\t2.Low   \n\t\t\t\t\t3.Middle     \n\t\t\t\t\t4.None\n");
	printf("\n\t\t\t\t----------------------------------------------------------------------\n");
	printf("\t\t\t\tEnter your answer number here:");
	scanf("%d",&option[4]);
	
	end = time (NULL);
    seconds = end - start;
	if (seconds >10)         
            {
            	system("cls");
            	system("Color 04");
            	printf("\n\n\n\n\n\n\n\t\t\t\tTime expired, you can't continue quiz, you have to play again");
            	getch();
            	system("cls");
                goto label;
			}
	if(option[4]==3)
	    	{
	    		system("Color 02");
	      		printf("\t\t\t\tYour answer is correct !\n");
	    		printf("\t\t\t\tMarks obtain:%d\n",correct_answer);
	   	    	marks++;
		    }
	else
		   {
		   	system("Color 04");
		   	printf("\t\t\t\tUFF your answer is wrong!\n");
		   	printf("\t\t\t\tMarks obtain:%d\n",incorrect_answer);
		   	printf("\n\t\t\t\tCorrect answer number is %d",3);
		   	p++;
		   }
		   
	fpdo=fopen("quiz3.txt","a");
	if(fpdo==NULL)
	{
		printf("Error in creating file");
		exit(1);
	} 
	
	fprintf(fpdo,"\n\t%10s %10s\t\t%2d\t\t%d/5",name,sname,Roll_no,marks);
	fclose(fpdo);   
    delay(5);
   system("cls");
	system("Color 07");
   printf("\n\n\n\n\n\t\t\t\t!!!!Thanks for playing c program quiz!!!!");
		
		  while(ch!=3)
		  {
		  	
	     	printf("\n\n\t\tAre you wants to continue or not please enter following to proceed further");
	    	printf("\n\n\t\t[1].Result of c program quiz\t\t[2]Continue\t\t[3].exit\n\n\t\t");
		    scanf("%d",&ch);
		  	switch(ch)
		  	{
		  			case 3:
		  				system("cls");
		  				printf("\n\n\n\n\n\t\tTHANK TOU FOR PARTICIPATION");
						printf("\n\t\tPress any key to log out-------------\n\n ");
						exit(0);
		  		      	break;
				  case 2:
				    	system("cls");
				  	    int chh;
		            	while(chh!=6)                                            //menu will display until option is not equal to 4
	                      {
	                     	label:
	   	                    system("color 0B");
	                     	printf("\n\n\n\n\n\n\n\t\t\t\t------Menu of Quiz-----\n\n");
	   	                 	printf("\n\n\n\t\t\t\t(__________________________________________________________________/");
	                    	printf("\n\t\t\t\t___________________________________________________________");
	                    	printf("\n\t\t\t\t(\t\t1:\tQuiz on technical question\t   )\n");
	   	                    printf("\t\t\t\t|\t\t2.\tQuiz on non technical questions    |\n");
	                      	printf("\t\t\t\t|\t\t3.\tQuiz on c programs \t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t4.\tQuiz on math                   \t   |\n"); 
	   	                    printf("\t\t\t\t|\t\t5.\tTo continue quiz\t\t   |\n");
	   	                    printf("\t\t\t\t|\t\t6.\tExit                   \t\t   |");
	                        printf("\n\t\t\t\t|\t\t\t\t\t\t\t   |\n\t\t\t\t\t\tEnter your option according to menu:                            ");
	                        printf("\n\t\t\t\t(_____________________________________________________________)");
	                        printf("\n\t\t\t\t______________________________________________________________________/\n\n\t\t\tOption:");
	   
	   	                    scanf("%d",&chh);
	   	                    switch(chh)
	   	                      {
	   	                         case 1:
	   	    	                      printf("\n\n\t\t\tTechnical Quiz will start in few seconds-------------");
			                          quiz1();
			                          break;
			                    case 2:
			   	                   printf("\n\n\t\t\tNon-Technical Quiz will start in few seconds-------------");
			                       quiz2();
			                          break;
			   	
			   	               case 3:
			   		                 printf("\n\n\t\t\tC Programming Quiz will start in few seconds-------------");
				                     quiz3();
			                         break;
			                   
							   case 4:
			                    	printf("\n\n\t\t\tMath Quiz will start in few seconds-------------");
				                    quiz4();
			                        break;
			                   
							   case 5:
			   	                   system("cls");
			   	                   printf("\n\n\n\n\n\n\n\t\tPROCESSING!\n");
			   	                   delay(5);
			   	                   system("cls");
			   	                   goto label;
			                       break;
			                   
							   case 6:
			   	                  system("cls");
			   	                  printf("\n\n\n\n\n\n\n\t\tTHANKS FOR PARTICIPATION!\n");
			   	                  printf("\n\t\tPress enter to logout----------!\n");
			                   	  exit(0);
			   	                  break;
			                 
							 default:
			                    printf("\tSorry wrong option!!!!!!!!!!!!!!!!!!\n");
			                    printf("\tEnter correct option from given menu\n");
			                    break;
	     	}
	     
		  }
	break;
		  			
		  		
	case 1:
	system("cls");
	system("color 02");
	gotoxy(0,3);
	printf(" \n\n\n\n\t\t\t");
	printf("  _____                 _ _   \n");
	gotoxy(0,4);
	printf(" |  __ \\               | | |  \n ");
	gotoxy(0,5);
	printf(" | |__) |___  ___ _   _| | |_ \n ");
	gotoxy(0,6);
    printf(" |  _  // _ \\/ __| | | | | __|\n ");
	gotoxy(0,7);
	printf(" | | \\ \\  __/\\__ \\ |_| | | |_ \n ");
	gotoxy(0,8);
	printf(" |_|  \\_\\___||___/\\__,_|_|\\__|\n ");
	system("color 06");
    gotoxy(s,1);
    printf("                     ,---.           ,---.   \n ");
    gotoxy(s,2);
   printf("                    / /^`.\\.--''''-./,'^\\ \\	\n ");
   gotoxy(s,3);
   printf("                    \\ \\    _       _    / /	\n ");
   gotoxy(s,4);
   printf("                     `./  / __   __ \\  \\,'	\n ");
   gotoxy(s,5);
   printf("                      /    /_O)_(_O\\    \\	\n ");
   gotoxy(s,6);
   printf("                      |  .-'  ___  `-.  |	\n ");
   gotoxy(s,7);
   printf("                   .--|       \\_/       |--.	\n ");
   gotoxy(s,8);
   printf("                 ,'    \\   \\   |   /   /    `.\n ");
   gotoxy(s,9);
   printf("                /       `.  `--^--'  ,'       \\\n ");
   gotoxy(s,10);
   printf("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n ");
   gotoxy(s,11);
   printf(".-----------/         \\------------------/         \\--------------.\n ");
   gotoxy(s,12);
   printf("| .---------\\         /----------------- \\         /------------. |\n ");
   gotoxy(s,13);
   printf("| |          `-`--`--'                    `--'--'-'             | |\n ");
   gotoxy(s,14);
   printf("| |                                                             | |\n ");
   gotoxy(s,15);
   printf("| |                                                             | |\n ");
   gotoxy(s,16);
   printf("| |                                                             | |\n ");
   gotoxy(s,17);
   printf("| |                                                             | |\n ");
   gotoxy(s,18);
   printf("| |_____________________________________________________________| |\n ");
   gotoxy(s,19);
   printf("|_________________________________________________________________|\n ");
   gotoxy(s,20);
   printf("                   )__________|__|__________(\n ");
   gotoxy(s,21);
   printf("                  |            ||            |\n ");
   gotoxy(s,22);
   printf("                  |____________||____________|\n ");
   gotoxy(s,23);
   printf("                    ),-----.(      ),-----.(\n ");
   gotoxy(s,24);
   printf("                  ,'   ==.   \\    /  .==    `.\n ");
   gotoxy(s,25);
   printf("                 /            )  (            \\\n ");
   gotoxy(s,26);
   printf("                 `==========='    `==========='  \n ");
   system("color 06");
   gotoxy(35,14);
   printf("Name ==>%s %s",name, sname);
   system("color 06");
   gotoxy(70,14);
   printf("Roll No ==>%d ",Roll_no);
   system("color 06");
   gotoxy(35,15);
   printf("Total Score ==> 5");
   gotoxy(70,15);
   printf("Your Score ==> %d",marks);
   system("color 06");
   gotoxy(35,16);
   printf("Wrong answer ==>%d ",p);
	if(marks==5){
	gotoxy(70,16);
	printf("Grade ==> A+");
    }
   else if(marks>=2&& marks<=4)
   {
     gotoxy(70,16);
	 printf("Grade ==>A ");	
  }
  else 
   {
      gotoxy(70,16);
	  printf("Grade ==> C");	
  }
   system("color 06");
   if(marks>=3)
    {
	   gotoxy(35,17);
      printf("Comments==> Good Marks! ");
   }

   else
    {
		gotoxy(35,17);
        printf("Comments==> Do hard work! ");
   }

  
   	PlaySound(TEXT("new music.WAV"),NULL,SND_SYNC);     
	delay(5);
	system("cls");
	system("color 07");
	printf("\n\n\n\n\n\n\n\n\n\t\t\tPress any key to proceed......... ");
	getch();
	system("cls");	
	break;
	
	default:
	printf("\t\twrong option!");
	break;
	  }
		 }
    delay(5);
    system("cls");
	
	}
	   
	   
	   
//function for math quiz	   
void quiz4()
	 {
	   	delay(5);
	   	system("cls");
	   	FILE *fpdo;	
	   	int ch;
	   	int s=30;
	   	int p;
	   	int l,j,a,k=1;
	   	char name[50],sname[50];
	   	int marks=0;
	   	int i;
	   	int response;
	   	int correct_answer=0;
	   	int incorrect_Answer=0;
	   	int Roll_no;
	   	system("color 0B");
	   	printf("\n\n\n\n\n\n\t\t\t\t\tMath Quiz:");
	   	printf("\n\t\t\t\t-------------------------------------\n");
	   	printf("\n\n\n\t Complete registration process\n\n");
	   	printf("\n\t\t[1]\t Enter your name[name and sirname]:");
	   	scanf("%s%s",name,sname);
	   	printf("\t\t[2]\t Enter your roll no:");
	   	scanf("%d",&Roll_no);
	   	printf(" \n\n\t\t\tRegistration completed sucessfully!");
	   	delay(5);
	   	system("cls");
	   	system("color 02");
	   	printf("\n\n\n\n\n\n\t\t\t\t\t-------------------RULES------------------------\n\n");
	   	printf("\n\n\t\t\t==================================================================================\n");
	   	printf("\n\t\t\t||\tWeicome %s %s to the maths quiz                                         ||",name,sname);
	   	printf("\n\t\t\t||\tRules for technical quiz:                                                 ||\n");
	   	printf("\t\t\t||\tPlease read carefuly.........                                             ||");
	   	printf("\n\t\t\t||\t1.The quiz will consist of questions                                      ||\n");
	   	printf("\t\t\t||\t2.For all questions enter correct answer from given options               ||\n");
	   	printf("\t\t\t||\t3.Each question for 1 marks                                               ||\n");
	   	printf("\t\t\t||\t4.Total marks:5                                                           ||\n");
	   	printf("\t\t\t||\t5.Result will display at end                                              ||\n");
	   	printf("\n\t\t\t===============================================================================");
	   
	   	printf("\n\n\n\t\t\t------------------------------------------------------------------------------------\n");
	   	printf("\n\t\t\t\t-----------------------Best of Luck!------------------------------\n");
	   	printf("\n\n\n\t\t\tIf you have read all rules please enter any key t proceed............\n\t\t\t");
	   	getch();
	   	system("color 07");
	    system("cls");
	   	printf("\n\n\n\n\n\n\t\t\tPlease enter no of problems would you want to solve    :");
	   	scanf("%d",&response);
	   
	   	printf("\n\n\t\t\tWait for second....................");
	   	 delay(5);
	   	system("cls");
	   	if(response==0)
	   	{
	   	   printf("\n\t\tThanks for playiing!!!!!!!");	
		 }
		 srand(time(0));//for generating random number each time
		   for(i=0;i<response;i++)
		   {
		   	 printf("\n\n\n\n\n\n\t\t\t\t\t\t...............QUESTION %d OUT OF %d................\n",k,response);
	   	     printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
	          int right_answer=1;
		   	  int wrong_answer=0;
		   	   int answer=0;
		   	   int a=rand()%12;
		   	   int b=rand()%12;
		   	   int c=rand()%12;
		   	   int d=rand()%12;
		   	   system("Color 07");
		   	   printf("\n\n\t\t\t\tQuestion %d:\n\t\t\t\t(%d+%d)+(%d+%d)?",k,a,b,c,d);
		   	   printf("\n\n\t\t\t\t----------------------------------------------------------------------\n");
			   printf("\n\n\t\t\t\tEnter your answer here:");
		   	   scanf("%d",&answer);
		   	      if(((a+b)+(c+d))==answer)
		   	       {
		   		    system("Color 02");
		   		    printf("\t\t\t\tcongratulations correct answer");
		   		    printf("\n\t\t\t\tMarks obtain:%d\n",right_answer);
		   		    correct_answer++;
		   		    marks++;
		   		    delay(5);
	   	            system("cls");
			       }
			     
				 else
			      {
			   	    system("Color 04");
			   	    printf("\t\t\t\twrong answer\n");
			   	    printf("\t\t\t\tUFF your answer is wrong!\n");
		   	        printf("\t\t\t\tMarks obtain:%d",wrong_answer);
		   		    incorrect_Answer++;
		   		    printf("\n\n\t\t\t\tCorrect answer is:%d",((a+b)+(c+d)));
		   		    delay(5);
	   	            system("cls");
			     }
			    k++;
			}
	fpdo=fopen("quiz4.txt","a");
	    if(fpdo==NULL)
	      {
	      	printf("Error in creating file");
		    exit(1);
	    } 
	
	fprintf(fpdo,"\n\t%10s %10s\t\t%2d\t\t%d/%d",name,sname,Roll_no,marks,response);
	fclose(fpdo);  
	
	
	  system("Color 07");
	  printf("\n\n\n\n\n\t\t\t\t!!!!Thanks for playing math quiz!!!!");
	  while(ch!=3)
		  {
		  	
		    printf("\n\n\t\tAre you wants to continue or not please enter following to proceed further");
	    	printf("\n\n\t\t[1].Result of math quiz\t\t[2]Continue\t\t[3].exit\n\n\t\t");
		   scanf("%d",&ch);
		     	switch(ch)
		  	     {
		  			case 3:
		  			    system("cls");
		  				printf("\n\n\n\n\n\n\t\tTHANK TOU FOR PARTICIPATION");
						printf("\n\t\tPress any key to log out----------\n\n ");
						exit(0);
		  			    break;
				    
					case 2:
				        system("cls");
				  	    int chh;
		  	             while(chh!=6)                                            //menu will display until option is not equal to 4
	                       {
	   	                       label:
	   		                   system("color 0B");
	   	                       printf("\n\n\n\n\n\n\n\t\t\t\t------Menu of Quiz-----\n\n");
	   		                   printf("\n\n\n\t\t\t\t(__________________________________________________________________/");
	   	                       printf("\n\t\t\t\t___________________________________________________________");
	   	                       printf("\n\t\t\t\t(\t\t1:\tQuiz on technical question\t   )\n");
	   	                       printf("\t\t\t\t|\t\t2.\tQuiz on non technical questions    |\n");
	   	                       printf("\t\t\t\t|\t\t3.\tQuiz on c programs \t\t   |\n");
	                           printf("\t\t\t\t|\t\t4.\tQuiz on math                   \t   |\n"); 
	   	                       printf("\t\t\t\t|\t\t5.\tTo continue quiz\t\t   |\n");
	   	                       printf("\t\t\t\t|\t\t6.\tExit                   \t\t   |");
	                           printf("\n\t\t\t\t|\t\t\t\t\t\t\t   |\n\t\t\t\t\t\tEnter your option according to menu:                            ");
	                           printf("\n\t\t\t\t(_____________________________________________________________)");
	                           printf("\n\t\t\t\t______________________________________________________________________/\n\n\t\t\tOption:");
	                           scanf("%d",&chh);
	   	                           switch(chh)
	   	                           {
	   	                             case 1:
	   	    	                        printf("\n\n\t\t\tTechnical Quiz will start in few seconds-------------");
			                            quiz1();
			                            break;
			                        
									case 2:
			   	                       printf("\n\n\t\t\tNon-Technical Quiz will start in few seconds-------------");
			                           quiz2();
			                           break;
			   	
			                    	case 3:
			   		                    printf("\n\n\t\t\tC Programming Quiz will start in few seconds-------------");
				                        quiz3();
			                            break;
			                      
								     case 4:
			   	                         printf("\n\n\t\t\tMath Quiz will start in few seconds-------------");
				                         quiz4();
			                             break;
			                        
									case 5:
			   	                        system("cls");
			   	                        printf("\n\n\n\n\n\n\n\t\tPROCESSING!\n");
			   	                        delay(5);
			   	                        system("cls");
			   	                        goto label;
			                            break;
			                       
								   case 6:
			   	                       system("cls");
			   	                       printf("\n\n\n\n\n\n\n\t\tTHANKS FOR PARTICIPATION!\n");
			   	                       printf("\n\t\tPress enter to logout----------!\n");
			   	                       exit(0);
	                                  break;
			                       
								default: 
			                         printf("\tSorry wrong option!!!!!!!!!!!!!!!!!!\n");
			                         printf("\tEnter correct option from given menu\n");
			                         break;
	     	    }    
	     
		  }
    	break;
		  			
		  		
		case 1:
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\tWait for second!");
	     printf("\n\n\t\t\t\tLOADING RESULT");
	    for(l=0;l<=6;l++)
	      {
		     for(j=0;j<100000000;j++)
				a=j;
		    	printf(".");
		
	       }
	   system("cls");
	   system("color 0B");
	   gotoxy(0,3);
	   printf(" \n\n\n\n\t\t\t");
	   printf("  _____                 _ _   \n");
	   gotoxy(0,4);
	   printf(" |  __ \\               | | |  \n ");
	   gotoxy(0,5);
	   printf(" | |__) |___  ___ _   _| | |_ \n ");
	   gotoxy(0,6);
       printf(" |  _  // _ \\/ __| | | | | __|\n ");
	  gotoxy(0,7);
	  printf(" | | \\ \\  __/\\__ \\ |_| | | |_ \n ");
	  gotoxy(0,8);
	  printf(" |_|  \\_\\___||___/\\__,_|_|\\__|\n ");
      system("color 0C");
      gotoxy(s,1);
      printf("                     ,---.           ,---.   \n ");
     gotoxy(s,2);
     printf("                    / /^`.\\.--''''-./,'^\\ \\	\n ");
     gotoxy(s,3);
     printf("                    \\ \\    _       _    / /	\n ");
     gotoxy(s,4);
     printf("                     `./  / __   __ \\  \\,'	\n ");
     gotoxy(s,5);
     printf("                      /    /_O)_(_O\\    \\	\n ");
    gotoxy(s,6);
    printf("                      |  .-'  ___  `-.  |	\n ");
    gotoxy(s,7);
    printf("                   .--|       \\_/       |--.	\n ");
    gotoxy(s,8);
    printf("                 ,'    \\   \\   |   /   /    `.\n ");
    gotoxy(s,9);
    printf("                /       `.  `--^--'  ,'       \\\n ");
    gotoxy(s,10);
    printf("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n ");
    gotoxy(s,11);
    printf(".-----------/         \\------------------/         \\--------------.\n ");
    gotoxy(s,12);
    printf("| .---------\\         /----------------- \\         /------------. |\n ");
    gotoxy(s,13);
    printf("| |          `-`--`--'                    `--'--'-'             | |\n ");
    gotoxy(s,14);
    printf("| |                                                             | |\n ");
    gotoxy(s,15);
    printf("| |                                                             | |\n ");
    gotoxy(s,16);
    printf("| |                                                             | |\n ");
    gotoxy(s,17);
    printf("| |                                                             | |\n ");
    gotoxy(s,18);
    printf("| |_____________________________________________________________| |\n ");
    gotoxy(s,19);
    printf("|_________________________________________________________________|\n ");
   gotoxy(s,20);
   printf("                   )__________|__|__________(\n ");
   gotoxy(s,21);
   printf("                  |            ||            |\n ");
   gotoxy(s,22);
   printf("                  |____________||____________|\n ");
  gotoxy(s,23);
  printf("                    ),-----.(      ),-----.(\n ");
  gotoxy(s,24);
  printf("                  ,'   ==.   \\    /  .==    `.\n ");
  gotoxy(s,25);
  printf("                 /            )  (            \\\n ");
  gotoxy(s,26);
  printf("                 `==========='    `==========='  \n ");
  system("color 0B");
  gotoxy(35,14);
  printf("Name ==>%s %s",name, sname);
  system("color 0B");
  gotoxy(70,14);
  printf("Roll No ==>%d ",Roll_no);
  system("color 0B");
  gotoxy(35,15);
  printf("Total Score ==> %d",response);
  gotoxy(70,15);
  printf("Your Score ==> %d",marks);
  system("color 0B");
  gotoxy(35,16);
  printf("Wrong answer ==>%d",incorrect_Answer);
      if(marks==response){
	     gotoxy(70,16);
	     printf("Grade ==> A+");
       }
     else if(marks==(response/2))
      {
        gotoxy(70,16);
	    printf("Grade ==>A ");	
      }
   else 
      {
        gotoxy(70,16);
	    printf("Grade ==> C");	
     }


   system("color 0B");
   if(marks>(response/2))
    {
	gotoxy(35,17);
    printf("Comments==> Good Marks! ");
   }

   else
   {
		gotoxy(35,17);
       printf("Comments==> Do hard work! ");
  }

	
	PlaySound(TEXT("new music.WAV"),NULL,SND_SYNC);
	delay(5);
	system("cls");
	system("color 07");
	printf("\n\n\n\n\n\n\n\n\n\t\t\tPress any key to proceed......... ");
	getch();
	system("cls");	
	break;
	
	
	default:
		printf("\t\twrong option!");
		break;
			  }
		  } 

  delay(5);
  system("cls");
		    
	   }

