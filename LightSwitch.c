#pragma config(Sensor, S1,     sound,          sensorSoundDBA)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void edge ()
{
	while(SensorValue(sound) > 50)
	{
		motor[motorA] = 0;
		if(SensorValue(sound) < 50)
		{
			clearTimer(timer1);
		}
		while(getTimerValue(timer1)<=1000)
		{
			if(SensorValue(sound) > 50)
			{
				motor[motorA] = 50;
					if(getMotorEncoder(motorA) >180)
					{
						motor[motorA] = 0;
					}
			}

		}
	}
}
// sets the timer back to zero

task main()
{
	while(true)
	{
		edge();
	}
}
