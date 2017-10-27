void edge ()
{
	while(SensorValue(sound) > 50)
	{
		motor[motorA] = 0;
		if(SensorValue(sound) < 50)
		{
			clearTimer(timer1);
		}
		while(getTimerValue(timer1)
	}


}
{
	// sets the timer back to zero
task main()
	clearTimer(timer1);
	// wait forf clap
	while(SensorValue(sound) < 60)
	{
	}
if(getTimerValue(timer1)< 1000)
{
	if

}


}
	if(SensorValue(sound) > 60)
			{
				clap = clap + 1;
				wait1Msec(100);
			}

			while(clap == 1)
			{
				if(SensorValue(sound) > 60)
				{
					clap = clap + 1;
					wait1Msec(100);
				}
			}

			if(clap == 2)
			{
				while(getMotorEncoder(motorA) < 180)
				{
					motor[motorA] = 50;
				}
				motor[motorA] = 0;
				clap = 0;
				resetMotorEncoder(motorA);
			}
