#pragma config(UART_Usage, UART2, uartVEXLCD, baudRate19200, IOPins, None, None)

void allmotors(int qwe) // qwe is power assigned
{
	motor[port2] = qwe;
}


task main()
{
	int control = 0; //changing variable for conditions

	while(true)
	{
		if(vexRT[Btn7L] == 1)//if user wants to shift left
		{
			if(control > 0)
			{
				control--;
				wait1Msec(200);
			}
			else if(control == 0)
			{
				control = 9;
				wait1Msec(200);
			}
			else
			{
				control = control;
			}
		}

		else if(vexRT[Btn7R] == 1)
		{
			if(control < 9)
			{
				control++;
				wait1Msec(200);
			}
			else if(control == 9)
			{
				control = 0;
				wait1Msec(200);
			}
			else
			{
				control = control;
			}
		}

		switch(control)
		{
		case 0:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 1  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;

			//////////////////////////////////////////////////////////////
		case 1:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 2  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;

			//////////////////////////////////////////////////////////////
		case 2:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 3  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 3:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 4  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 4:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 5  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 5:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 6  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 6:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 7  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 7:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 8  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 8:
			displayLCDCenteredString(1, "7U ForW, 7D BacW");
			displayLCDString(0, 0, "Motor 9  ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
			}
			else if(vexRT[Btn7D] == 1)
			{
				displayLCDString(0, 9, "bckward");
			}
			else
			{
				displayLCDString(0, 9, "neutral");
			}
			break;
			//////////////////////////////////////////////////////////////
		case 9:
			displayLCDCenteredString(1, "7D Chng Direc");
			displayLCDString(0, 0, "Motor 10 ");

			if(vexRT[Btn7U] == 1)
			{
				displayLCDString(0, 9, "forward");
				wait1Msec(1000);
			}
			break;

		default:
			displayLCDString(0, 0, "n/a");
			break;
		}

		if(vexRT[Btn6U] == 1)
		{
			allmotors(0);
		}




	}
}
