// Seneca College 
// PRG-155 Final Lab Project (Unit Conversion)
// Maitrik Patel[147497176]
// Proff. Mitchell Paddon

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void MainMenu();

void Celsius_To_Fahrenhit(int);
 //PROTOTYPE FOR CELSIUS TO FAHRENHIT
void Celsius_To_Kelvin(int);
 //PROTOTYPE FOR CELSIUS TO KELVIN
void Fahrenhit_To_Celsius(int);
 //PROTOTPYE FOR FAHRENHIT TO CELSIUS
void Fahrenhit_To_kelvin(int);
 //PROTOTPYE FOR FAHRENHIT TO KELVIN
void kelvin_To_Celsius(int);
 //PROTOTPYE FOR KELVIN TO CELSIUS
void kelvin_To_Fahrenhit(int);
 //PROTOTPYE FOR KELVIN TO FAHRENHIT
 
void Pound_To_Kilogram(int);
 //PROTOTYPE FOR POUND TO KILOGRAM
void Pound_To_Ounce(int);
 //PROTOTYPE FOR POUND TO OUNCE
void Kilogram_To_Pound(int);
 //PROTOTPYE FOR KILOGRAM TO POUND
void Kilogram_To_Ounce(int);
 //PROTOTPYE FOR KILOGRAM TO OUNCE
void Ounce_To_Pound(int);
 //PROTOTPYE FOR OUNCE TO POUND
void Ounce_To_Kilogram(int);
 //PROTOTPYE FOR OUNCE TO KILOGRAM

void Miles_To_Kilometer(int);
 //PROTOTYPE FOR MILES TO KILOMETER
void Miles_To_Feet(int);
 //PROTOTYPE FOR MILES TO FEET
void Kilometer_To_Miles(int);
 //PROTOTPYE FOR KILOMETER TO MILES
void Kilometer_To_Feet(int);
 //PROTOTPYE FOR KILOMETER TO FEET
void Feet_To_Miles(int);
 //PROTOTPYE FOR FEET TO MILES
void Feet_To_Kilometer(int);
 //PROTOTPYE FOR FEET TO KILOMETER
 
 void Hours_To_Minutes(int);
 //PROTOTYPE FOR HOURS TO MINUTES
void Hours_To_Seconds(int);
 //PROTOTYPE FOR HOURS TO SECONDS
void Minutes_To_Hours(int);
 //PROTOTPYE FOR MINUTES TO HOURS
void Minutes_To_Seconds(int);
 //PROTOTPYE FOR MINUTES TO SECONDS
void Seconds_To_Hours(int);
 //PROTOTPYE FOR SECONDS TO HOURS
void Seconds_To_Minutes(int);
 //PROTOTPYE FOR SECONDS TO MINUTES
 
int main()
{
 MainMenu();
 return 0;
}
void Exit_From_App()
{
 exit(0);
}
void MainMenu(void)
{
	int Menu;
	system("cls");
	 //CLEAR SCREEN
	printf("\n    ##### Welcome To The Unit Converter ######        \n\n\n");
	Main_Menu :
	printf("\nConverter Main Menu\n");
	printf("[1]-Temperature\n");
	printf("[2]-Mass\n");
	printf("[3]-Length\n");
	printf("[4]-Time\n");
	printf("[5]-Exit");
	 // PRINTS ELEMENTS IN MAIN MENU.
	printf("\n Please Select From The following Options : ");
	scanf("%d", &Menu);
	switch(Menu)
	{
		case 1 :
			system("cls");
			TemperatureConversion();
			 //FUNCTION TO TEMPERATURE CONVERTER
			break;
		case 2 :
			system("cls");
			MassConversion();
			  //FUNCTION TO MASS CONVERTER
			break;
		case 3 :
			system("cls");
			LengthConversion();
			  //FUNCTION TO LENGTH CONVERTER
			break;
		case 4 :
			system("cls");
			TimeConversion();
			  //FUNCTION TO TIME CONVERTER
			break;
		case 5 :
			Exit_From_App();
			break;
		default :
		    printf("\nInvalid Input Please Try Again\n");
		    system("pause");
		    system("cls");
		    goto Main_Menu;
			break;
	}
}

TemperatureConversion() //TEMPERATURE FUNCTION
{
	
	int To,Choice;
	float Celsius,Fahrenhit;
	float Kelvin;
	Sub_Temp :
	printf("SubMenu of Temperature\n");
	printf("From\n");
	SubMenu_of_Temperature();
	   
	printf("Please proceed to Enter Your Choice\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1 :
			printf("\nPlease Enter the value of Temperature in Celsius :");
			scanf("%f",&Celsius);
			printf("\nTo\n");
			SubMenu_of_Temperature();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1)
			{
		      printf("You Choose to Converter Celsius To Celsius\n");
		      printf("Celsius : %.2fC\n",Celsius);
			}
			else if(To==2){Celsius_To_Fahrenhit(Celsius);}
			else if(To==3){Celsius_To_Kelvin(Celsius);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 2 :
			printf("\n Please Enter the value of Temperature in Fahrenhit :");
			scanf("%f",&Fahrenhit);
			printf("\nTo\n");
			SubMenu_of_Temperature();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Fahrenhit_To_Celsius(Fahrenhit);}
			else if(To==2)
			{
			 printf("You Choose to Converter Fahrenhit To Fahrenhit\n");
		     printf("Fahrenhit : %.2fF\n",Fahrenhit);
			}
			else if(To==3){Fahrenhit_To_Kelvin(Fahrenhit);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 3 :
			printf("\n Please Enter the value of Temperature in Kelvin :");
		    scanf("%f",&Kelvin);
			printf("\nTo\n");
			SubMenu_of_Temperature();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Kelvin_To_Celsius(Kelvin);}
			else if(To==2){Kelvin_To_Fahrenhit(Kelvin);}
			else if(To==3)
			{
			 printf("You Choose to Converter Kelvin To Kelvin\n");
		     printf("Kelvin : %.2fK\n",Kelvin);				
			}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 4 :
			MainMenu();
			break;
		default :
		    printf("Invalid Input Please Try Again\n");
		    goto Sub_Temp;
		    break;
	}

	
}

MassConversion()  //MASS FUNCTION
{

	int To,Choice;
	float Pound,Kilogram;
	float Ounce;
	Sub_Mass :
	printf("SubMenu of Mass\n");
	printf("From\n");
	SubMenu_of_Mass();
	printf("Please proceed to Enter Your Choice\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1 :
			printf("\nPlease Enter the value of Mass in Pound :");
			scanf("%f",&Pound);
			printf("\nTo\n");
			SubMenu_of_Mass();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1)
			{
		      printf("You Choose to Converter Pound To Pound\n");
		      printf("Pound : %.2flb\n",Pound);
			}
			else if(To==2){Pound_To_Kilogram(Pound);}
			else if(To==3){Pound_To_Ounce(Pound);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 2 :
			printf("\n Please Enter the value of Mass in Kilogram :");
			scanf("%f",&Kilogram);
			printf("\nTo\n");
			SubMenu_of_Mass();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Kilogram_To_Pound(Kilogram);}
			else if(To==2)
			{
			 printf("You Choose to Converter Kilogram To Kilogram\n");
		     printf("Kilogram : %.2fkg\n",Kilogram);
			}
			else if(To==3){Kilogram_To_Ounce(Kilogram);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 3 :
			printf("\n Please Enter the value of Mass in Ounce :");
		    scanf("%f",&Ounce);
			printf("\nTo\n");
			SubMenu_of_Mass();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Ounce_To_Pound(Ounce);}
			else if(To==2){Ounce_To_Kilogram(Ounce);}
			else if(To==3)
			{
			 printf("You Choose to Converter Ounce To Ounce\n");
		     printf("Ounce : %.2foz\n",Ounce);				
			}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 4 :
			MainMenu();
			break;
		default :
		    printf("Invalid Input Please Try Again\n");
		    goto Sub_Mass;
		    break;
	}

	
}

LengthConversion()  //LENGTH FUNCTION
{
	
	int To,Choice;
	float Miles,Kilometer;
	float Feet;
	Sub_Length :
	printf("SubMenu of Length\n");
	printf("From\n");
	SubMenu_of_Length();
	printf("Please proceed to Enter Your Choice\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1 :
			printf("\nPlease Enter the value of Length in Miles :");
			scanf("%f",&Miles);
			printf("\nTo\n");
			SubMenu_of_Length();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1)
			{
		      printf("You Choose to Converter Miles To Miles\n");
		      printf("Miles : %.2fmile\n",Miles);
			}
			else if(To==2){Miles_To_Kilometer(Miles);}
			else if(To==3){Miles_To_Feet(Miles);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 2 :
			printf("\n Please Enter the value of Length in Kilometer :");
			scanf("%f",&Kilometer);
			printf("\nTo\n");
			SubMenu_of_Length();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Kilometer_To_Miles(Kilometer);}
			else if(To==2)
			{
			 printf("You Choose to Converter Kilometer To Kilometer\n");
		     printf("Kilometer : %.2fkm\n",Kilometer);
			}
			else if(To==3){Kilometer_To_Feet(Kilometer);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 3 :
			printf("\n Please Enter the value of Length in Feet :");
		    scanf("%f",&Feet);
			printf("\nTo\n");
			SubMenu_of_Length();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Feet_To_Miles(Feet);}
			else if(To==2){Feet_To_Kilometer(Feet);}
			else if(To==3)
			{
			 printf("You Choose to Converter Feet To Feet\n");
		     printf("Feet : %.2ffeet\n",Feet);				
			}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 4 :
			MainMenu();
			break;
		default :
		    printf("Invalid Input Please Try Again\n");
		    goto Sub_Length;
		    break;
	}

	
}

TimeConversion()  //TIME FUNCTION
{
	
	int To,Choice;
	float Hours,Minutes;
	float Seconds;
	Sub_Time :
	printf("SubMenu of Time\n");
	printf("From\n");
	SubMenu_of_Time();
	printf("Please proceed to Enter Your Choice\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1 :
			printf("\nPlease Enter the value of Time in Hours :");
			scanf("%f",&Hours);
			printf("\nTo\n");
			SubMenu_of_Time();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1)
			{
		      printf("You Choose to Converter Hours To Hours\n");
		      printf("Hours : %.2fhours\n",Hours);
			}
			else if(To==2){Hours_To_Minutes(Hours);}
			else if(To==3){Hours_To_Seconds(Hours);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 2 :
			printf("\n Please Enter the value of Time in Minutes :");
			scanf("%f",&Minutes);
			printf("\nTo\n");
			SubMenu_of_Time();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Minutes_To_Hours(Minutes);}
			else if(To==2)
			{
			 printf("You Choose to Converter Minutes To Minutes\n");
		     printf("Minutes : %.2fmin\n",Minutes);
			}
			else if(To==3){Minutes_To_Seconds(Minutes);}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 3 :
			printf("\n Please Enter the value of Time in Seconds :");
		    scanf("%f",&Seconds);
			printf("\nTo\n");
			SubMenu_of_Time();
			printf("\n Please Proceed to Enter Your Choice\n");
			scanf("%d",&To);
			if(To==1){Seconds_To_Hours(Seconds);}
			else if(To==2){Seconds_To_Minutes(Seconds);}
			else if(To==3)
			{
			 printf("You Choose to Converter Seconds To Seconds\n");
		     printf("Seconds : %.2fsec\n",Seconds);				
			}
			else if(To==4){ MainMenu();}
			else 
			{
		     printf("Invalid Input Please Try Again\n");	
			}
			break;
		case 4 :
			MainMenu();
			break;
		default :
		    printf("Invalid Input Please Try Again\n");
		    goto Sub_Time;
		    break;
	}

	
}

SubMenu_of_Temperature() //SUBMENU OF TEMPERATURE
{
	printf("[1]-Celsius\n");
	printf("[2]-Fahrenhit\n");
	printf("[3]-Kelvin\n");
	printf("[4]-Exit To MainMenu\n");
}

SubMenu_of_Mass() //SUBMENU OF MASS 
{
	printf("[1]-Pound\n");
	printf("[2]-Kilogram\n");
	printf("[3]-Ounce\n");
	printf("[4]-Exit To MainMenu\n");
}

SubMenu_of_Length() //SUBMENU OF LENGTH 
{
	printf("[1]-Miles\n");
	printf("[2]-Kilometer\n");
	printf("[3]-Feet\n");
	printf("[4]-Exit To MainMenu\n");
}

SubMenu_of_Time() //SUBMENU OF TIME 
{
	printf("[1]-Hours\n");
	printf("[2]-Minutes\n");
	printf("[3]-Seconds\n");
	printf("[4]-Exit To MainMenu\n");
}

// ALL FUNCTION FOR TEMPERATURE CONVERSION BEGIN
void Celsius_To_Fahrenhit(int Celsius)
{
    float Fahrenhit;
    Fahrenhit=((Celsius*9)/5)+32;
	printf("\nFahrenhit : %.2fF",Fahrenhit);
}
void Celsius_To_Kelvin(int Celsius)
{
    float Kelvin;
	Kelvin=Celsius+273.15;
	printf("\nKelvin : %.2fK\n",Kelvin);
}
void Fahrenhit_To_Celsius(int Fahrenhit)
{
    float Celsius;
	Celsius=(5*(Fahrenhit-32))/9;
	printf("\nCelsius : %.2fC",Celsius);
}
void Fahrenhit_To_Kelvin(int Fahrenhit)
{
    float Kelvin;
 	Kelvin=((5*(Fahrenhit-32))/9)+273;
	printf("\nKelvin : %.2fK\n",Kelvin);

}
void Kelvin_To_Celsius(int Kelvin)
{
    float Celsius;
    Celsius=Kelvin-273;
	printf("\nCelsius : %.2fC",Celsius);
}
void Kelvin_To_Fahrenhit(int Kelvin)
{
    float Fahrenhit;
	Fahrenhit= (9*(Kelvin-273))/5+32;
	printf("\nFahrenhit : %.2fF",Fahrenhit);
}
 // ALL FUNCTION FOR TEMPERATURE CONVERSION END
 
 // ALL FUNCTION FOR MASS CONVERSION BEGIN
void Pound_To_Kilogram(int Pound)
{
    float Kilogram;
    Kilogram=Pound*0.45359237;
	printf("\nKilogram : %.2fkg\n",Kilogram);
}
void Pound_To_Ounce(int Pound)
{
    float Ounce;
	Ounce=Pound*16;
	printf("\nOunce : %.2foz\n",Ounce);
}
void Kilogram_To_Pound(int Kilogram)
{
    float Pound;
	Pound=Kilogram/0.45359237;
	printf("\nPound : %.2flb\n",Pound);
}
void Kilogram_To_Ounce(int Kilogram)
{
    float Ounce;
 	Ounce=Kilogram/0.02834952;
	printf("\nOunce : %.2foz\n",Ounce);
}
void Ounce_To_Pound(int Ounce)
{
    float Pound;
    Pound=Ounce/16;
	printf("\nPound : %.2flb\n",Pound);
}
void Ounce_To_Kilogram(int Ounce)
{
    float Kilogram;
	Kilogram=Ounce*0.02834952;
	printf("\nKilogram : %.2fkg\n",Kilogram);
}
 // ALL FUNCTION FOR MASS CONVERSION END
 
// ALL FUNCTION FOR LENGTH CONVERSION BEGIN
void Miles_To_Kilometer(int Miles)
{
    float Kilometer;
    Kilometer=Miles/0.62137;
	printf("\nKilometer : %.2fkm\n",Kilometer);
}
void Miles_To_Feet(int Miles)
{
    float Feet;
	Feet=Miles*5280;
	printf("\nFeet : %.2ffeet\n",Feet);
}
void Kilometer_To_Miles(int Kilometer)
{
    float Miles;
	Miles=Kilometer*0.62137;
	printf("\nMiles : %.2fmile\n",Miles);
}
void Kilometer_To_Feet(int Kilometer)
{
    float Feet;
 	Feet=Kilometer*3280.8;
	printf("\nFeet : %.2ffeet\n",Feet);
}
void Feet_To_Miles(int Feet)
{
    float Miles;
    Miles=Feet*0.00018939;
	printf("\nMiles : %.2fmile\n",Miles);
}
void Feet_To_Kilometer(int Feet)
{
    float Kilometer;
	Kilometer=Kilometer/3280.8;
	printf("\nKilometer : %.2fkm\n",Kilometer);
}
 // ALL FUNCTION FOR LENGTH CONVERSION END
 
  // ALL FUNCTION FOR TIME CONVERSION BEGIN
void Hours_To_Minutes(int Hours)
{
    float Minutes;
    Minutes=Hours*60;
	printf("\nMinutes : %.2fmin\n",Minutes);
}
void Hours_To_Seconds(int Hours)
{
    float Seconds;
	Seconds=Hours*3600;
	printf("\nSeconds : %.2fsec\n",Seconds);
}
void Minutes_To_Hours(int Minutes)
{
    float Hours;
	Hours=Minutes/60;
	printf("\nHours : %.2fhours\n",Hours);
}
void Minutes_To_Seconds(int Minutes)
{
    float Seconds;
 	Seconds=Minutes*60;
	printf("\nSeconds : %.2fsec\n",Seconds);
}
void Seconds_To_Hours(int Seconds)
{
    float Hours;
    Hours=Seconds/3600;
	printf("\nHours : %.2fhours\n",Hours);
}
void Seconds_To_Minutes(int Seconds)
{
    float Minutes;
	Minutes=Minutes/60;
	printf("\nMinutes : %.2fmin\n",Minutes);
}
 // ALL FUNCTION FOR TIME CONVERSION END
