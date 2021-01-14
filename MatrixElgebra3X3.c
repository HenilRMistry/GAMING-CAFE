/*
	This is application for all 3X3 matrix operations ... 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	/*
		This application will help you to find 
			--> Transpose of a matrix
			--> Determenent of a matrix
			--> Multiplication/Addition/Substraction of matrix
	*/

	//required variables are all here...
	int UserChoice/*This variable will deal with all User Choices*/,i,j,k/*for looping purpose*/,Counter,AnotherCounter=-1;
	float Array[3][3]/*This 2d array for saving the main data*/,ArrayA[3][3],ArrayB[3][3]/*This two array for helping hands.*/,ans,ans1,ans2,ans3,determenent;
	clrscr();

	//printing the information about this application...
	printf("\n %c This is MatrixHelpo3 %c",1,1);
	printf("\n This application will help you with any matrix elgebra problems\n That contain 3X3 matrix operations.");
	printf("\n This application is very easy to use...Just input 1 for start this application...");
	printf("\n And 0 for exit \n Enter your choice :- ");
	scanf("%d",&UserChoice);

	//logical operation to start or exit the application
	if(UserChoice==0)
	{
		exit(0);//this will directly exits the program without proceeding further
	}

	//if userchoice will not be 0 then this part will be proceed further...
	MAINMENU:clrscr();//clear the screen...
	printf("\n MAIN MENU >>");//to show better navigation ...
	printf("\n\n Enter 0 for Matrix Analysis");
	printf("\n Enter 1 for Determenent of the matrix");
	printf("\n Enter 2 for Transpose of the matrix");
	printf("\n Enter 3 for Matrix operations (Addition/Substraction/Multiplication)");
	printf("\n Enter 4 for Inverse of a Matrix");
	printf("\n Enter 5 for Trance of the matrix");
	printf("\n Enter 6 for Exit the application");
	//grabbing the user choice...
	printf("\n Enter Choice :- ");
	scanf("%d",&UserChoice);


	//logical operation according the user choice
	clrscr();//clearing the screen first...
	switch(UserChoice)
	{
		case 0:
		{
			Label0:AnotherCounter=0;
			printf("\n MAIN MENU >> MATRIX ANALYSIS");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in Analysis ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrix and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);

			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >>");
					//saving the data in array
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}

					//checking for posiible types of array...
					Counter=0;
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							if(Array[i][j]==0)
							{
								Counter+=1;
							}
						}
					}
					if(Counter==9)//Zero Matrix
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Null Matrix.");
					}
					else if(Array[0][1]==0 && Array[0][2]==0 && Array[1][0]==0 && Array[1][2]==0 && Array[2][0]==0 && Array[2][1]==0 && (Array[0][0]==Array[1][1]) && (Array[1][1]==Array[2][2]) && (Array[0][0]!=1))
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Scalar Matrix.");	
					}
					else if(Array[0][1]==0 && Array[0][2]==0 && Array[1][0]==0 && Array[1][2]==0 && Array[2][0]==0 && Array[2][1]==0 && Array[0][0]==1 && (Array[0][0]==Array[1][1]) && (Array[1][1]==Array[2][2]))
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Unit Matrix.");	
					}
					else if(Array[0][1]==0 && Array[0][2]==0 && Array[1][0]==0 && Array[1][2]==0 && Array[2][0]==0 && Array[2][1]==0 && (Array[0][0]!=0) && (Array[1][1]!=0) && (Array[2][2]!=0))
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Diagonal Matrix.");	
					}
					else if(Array[1][0]==0 && Array[2][0]==0 && Array[2][1]==0 && (Array[0][0]!=0) && (Array[0][1]!=0) && (Array[0][2]!=0) && (Array[1][1]!=0) && (Array[1][2]!=0) && (Array[2][2]!=0))
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Upper Triangular Matrix.");
					}
					else if(Array[0][1]==0 && Array[0][2]==0 && Array[1][2]==0 && (Array[0][0]!=0) && (Array[1][0]!=0) && (Array[2][0]!=0) && (Array[1][1]!=0) && (Array[2][1]!=0) && (Array[2][2]!=0))
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Lower Triangular Matrix.");
					}
					else
					{
						clrscr();
						printf("\n MAINMENU >> MATRIX ANALYSIS >> PROCESSING >> RESULT");
						printf("\n This given matrix is Normal Matrix.");	
					}

				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 1:
		{
			Label1:AnotherCounter=1;
			printf("\n MAIN MENU >> DETERMENENT OF MARTIX");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in determenent of a matrix ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrix and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);


			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAINMENU >> DETERMENENT OF MARTIX >> PROCESSING >>");
					//saving the data
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}

					ans1=(Array[1][1]*Array[2][2])-(Array[2][1]*Array[1][2]);
					ans2=(Array[1][0]*Array[2][2])-(Array[2][0]*Array[1][2]);
					ans3=(Array[1][0]*Array[2][1])-(Array[2][0]*Array[1][1]);
					ans=(Array[0][0]*(ans1)-Array[0][1]*(ans2)+Array[0][2]*(ans3));
					clrscr();
					printf("\n MAINMENU >> DETERMENENT OF MARTIX >> PROCESSING >> RESULT");
					printf("\n The determenent of the given matrix is :- %.2f",ans);					
					
				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 2:
		{
			Label2:AnotherCounter=2;
			printf("\n MAIN MENU >> TRANSPOSE OF MARTIX");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in transpose of a matrix ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrix and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);


			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAINMENU >> TRANSPOSE OF MARTIX >> PROCESSING >>");
					//saving the data
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}

					clrscr();
					printf("\n MAINMENU >> DETERMENENT OF MARTIX >> PROCESSING >> RESULT");
				 	//printing the values that was grabbed by the USER OR printing the MATRIX
					printf("\n YOUR GIVEN MATRIX :- ");
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\t%.2f",Array[i][j]);
						}
					}

					//making tha transpose matrix ... 
					printf("\n THE TRANSPOSE OF THE MATRIX :- ");
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							//assining the values by swapping
							ArrayA[i][j] = Array[j][i];
						}
					}
					//displaying the transpose matrix...
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\t%.2f",ArrayA[i][j]);
						}
					}
					
				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 3:
		{
			Label3:AnotherCounter=3;
			printf("\n MAIN MENU >> OPERATIONS OF MARTIX");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in operations of a matrix ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrises and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);


			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAINMENU >> OPERATIONS OF MARTIX >> PROCESSING >>");
					//saving the data
					printf("\n\n Enter the first matrix :- ");
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}


					//saving the data
					printf("\n\n Enter the second matrix :- ");
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&ArrayA[i][j]);
						}
					}

					clrscr();//clearing the screen
					printf("\n MAINMENU >> OPERATIONS OF MARTIX >> PROCESSING >>");
					printf("\n\n Choose the operator by entering the choice...");
					printf("\n Enter 0 Addition");
					printf("\n Enter 1 Substraction");
					printf("\n Enter 2 Multiplication");
					printf("\n Enter Choice :- ");
					scanf("%d",&UserChoice);

					clrscr();
					switch(UserChoice)
					{
						case 0:
						{
							//addition of array ... 
							for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								{
									ArrayB[i][j] = Array[i][j]+ArrayA[i][j];
								}
							}

							printf("\n MAINMENU >> OPERATIONS OF MARTIX >> PROCESSING >> RESULT");

							printf("\n First matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",Array[i][j]);
								}
							}

							printf("\n Second matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayA[i][j]);
								}
							}
							//printing the answer of the matrix...
							printf("\n\n Here is your answer :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayB[i][j]);
								}
							}
						}
						break;

						case 1:
						{
							//substraction of array ... 
							for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								{
									ArrayB[i][j] = Array[i][j]-ArrayA[i][j];
								}
							}

							printf("\n MAINMENU >> OPERATIONS OF MARTIX >> PROCESSING >> RESULT");
							printf("\n First matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",Array[i][j]);
								}
							}

							printf("\n Second matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayA[i][j]);
								}
							}
							//printing the answer of the matrix...
							printf("\n\n Here is your answer :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayB[i][j]);
								}
							}
						}
						break;

						case 2:
						{
							//multiplication of array...
							for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								{
									ArrayB[i][j]=0;
									for(k=0;k<3;k++)
									{
										ArrayB[i][j] = ArrayB[i][j]+Array[i][k]*ArrayA[k][j]; 
									}
								}
							}

							printf("\n MAINMENU >> OPERATIONS OF MARTIX >> PROCESSING >> RESULT");
							printf("\n First matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",Array[i][j]);
								}
							}

							printf("\n Second matrix :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayA[i][j]);
								}
							}
							//printing the answer of the matrix...
							printf("\n\n Here is your answer :- ");
							for(i=0;i<3;i++)
							{
								printf("\n");
								for(j=0;j<3;j++)
								{
									printf("\t %.2f",ArrayB[i][j]);
								}
							}
						}
						break;

						default:
						{
							printf("\n ERROR >> WRONG INPUT << ERROR");
						}
						break;
					}
					
				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 4:
		{
			Label4:AnotherCounter=4;
			printf("\n MAIN MENU >> INVERSE OF MARTIX");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in inverse of a matrix ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrises and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);


			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAIN MENU >> INVERSE OF MARTIX >> PROCESSING >> ");//for better navigation...
					printf("\n\n Set the matrix :- ");
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the element [%d][%d] for matrix :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}

					ans1=(Array[1][1]*Array[2][2])-(Array[2][1]*Array[1][2]);
					ans2=(Array[1][0]*Array[2][2])-(Array[2][0]*Array[1][2]);
					ans3=(Array[1][0]*Array[2][1])-(Array[2][0]*Array[1][1]);
					ans=(Array[0][0]*(ans1)-Array[0][1]*(ans2)+Array[0][2]*(ans3));
					determenent = ans;

					if(ans==0)
					{
						clrscr();
						printf("\n MAIN MENU >> INVERSE OF MARTIX >> PROCESSING >> RESULT");//for better navigation...
						printf("\n\n The determenent of given matrix is 0 and hence,...\n The inverse is not posiible!");
					}
					else
					{
						//building the first row ... 
						ans = Array[1][1]*Array[2][2] - Array[2][1]*Array[1][2];
						ArrayA[0][0] = ans;
						ans = Array[1][0]*Array[2][2] - Array[2][0]*Array[1][2];
						ArrayA[0][1] = -ans;
						ans = Array[1][0]*Array[2][1] - Array[2][0]*Array[1][1];
						ArrayA[0][2] = ans;

						//building the second row ... 
						ans = Array[0][1]*Array[2][2] - Array[2][1]*Array[0][2];
						ArrayA[1][0] = -ans;
						ans = Array[0][0]*Array[2][2] - Array[2][0]*Array[0][2];
						ArrayA[1][1] = ans;
						ans = Array[0][0]*Array[2][1] - Array[2][0]*Array[0][1];
						ArrayA[1][2] = -ans;

						//building the last row ... 
						ans = Array[0][1]*Array[1][2] - Array[1][1]*Array[0][2];
						ArrayA[2][0] = ans;
						ans = Array[0][0]*Array[1][2] - Array[1][0]*Array[0][2];
						ArrayA[2][1] = -ans;
						ans = Array[0][0]*Array[1][1] - Array[1][0]*Array[0][1];
						ArrayA[2][2] = ans;

						for(i=0;i<3;i++)
						{
							for(j=0;j<3;j++)
							{
								ArrayB[i][j] = ArrayA[j][i];
							}
						}

						clrscr();
						printf("\n MAIN MENU >> INVERSE OF MARTIX >> PROCESSING >> RESULT");//for better navigation...
						printf("\n\n The answer of inverse of the given matrix..");
						for(i=0;i<3;i++)
						{
							printf("\n");
							for(j=0;j<3;j++)
							{
								if(i==1)
								{
									if(j==0)
									{
										printf("1/%.2f",determenent);
										printf("\t %.2f",ArrayB[i][j]);
									}
									else
									{
										printf("\t\t %.2f",ArrayB[i][j]);		
									}
								}
								else
								{
									printf("\t\t %.2f",ArrayB[i][j]);
								}
							}
						}
					}

				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 5:
		{
			Label5:AnotherCounter=5;
			printf("\n MAIN MENU >> TRANS OF MARTIX");//for better navigation...
			//for more interaction...
			printf("\n\n Okay so, you are intrested in operations of a matrix ... I can do that\n Now last step if you want your answer...");
			printf("\n You just need to enter 2 for set the 3X3 matrises and at last i will give you the answer.");
			printf("\n\n Enter 0 for go to MAIN MENU");
			printf("\n Enter 1 for Quit");
			printf("\n Enter 2 for Set the matrix");
			//grabbing the choice...
			printf("\n Enter Choice :- ");
			scanf("%d",&UserChoice);


			//logical operation accoring to user choice
			clrscr();//clearing the screen
			switch(UserChoice)
			{
				case 0:
				{
					goto MAINMENU;
				}
				break;

				case 1:
				{
					exit(0);
				}
				break;

				case 2:
				{
					printf("\n MAIN MENU >> TRANS OF MARTIX >> PROCESSING >> ");//for better navigation...
					printf("\n\n Enter the matrix :- ");
					for(i=0;i<3;i++)
					{
						printf("\n");
						for(j=0;j<3;j++)
						{
							printf("\n Enter the matrix element [%d][%d] :- ",i+1,j+1);
							scanf("%f",&Array[i][j]);
						}
					}

					clrscr();
					printf("\n MAIN MENU >> TRANS OF MARTIX >> PROCESSING >> RESULT");//for better navigation...
					printf("\n\n Here is the answer...");
					ans = Array[0][0]+Array[1][1]+Array[2][2];
					printf("\n Trance of given matrix is :- %.2f",ans);

				}
				break;

				default:
				{
					printf("\n ERROR >> WRONG INPUT << ERROR");
				}
				break;
			}
		}
		break;

		case 6:
		{
			exit(0);
		}
		break;

		default:
		{
			printf("\n ERROR >> WRONG INPUT << ERROR");
		}
		break;
	}

	printf("\n\n Enter 0 for exit this application.");
	printf("\n Enter 1 for MAIN MENU.");
	if(AnotherCounter>-1)
	{
		printf("\n Enter 2 for return to previous menu");
	}
	printf("\n Enter Choice :- ");
	scanf("%d",&UserChoice);

	if(UserChoice==0)
	{
		exit(0);
	}
	else if(UserChoice==1)
	{
		goto MAINMENU;
	}
	else
	{
		clrscr();
		if(AnotherCounter==0)
		{
			goto Label0;
		}
		else if(AnotherCounter==1)
		{
			goto Label1;
		}
		else if(AnotherCounter==2)
		{
			goto Label2;
		}
		else if(AnotherCounter==3)
		{
			goto Label3;
		}
		else if(AnotherCounter==4)
		{
			goto Label4;
		}
		else if(AnotherCounter==5)
		{
			goto Label5;
		}
	}

	getch();
}