#include <assert.h>
#include<bits/stdc++.h>
using namespace std;



		 void Check_BPM (float bpm)
		{
			if (bpm > 150)
			{
				cout<<"bpm is high" ;
			}
			else if (bpm < 70)
			{
				cout<<"bpm is low";
			}
			else
			{
				cout<<"bpm is normal";
			}
		}
	 void Check_SPO2 (float spo2)
		{
			if(spo2 > 90)
			{
				cout<<"spo2 is normal";
			}
			else
			{
			cout<<"spo2 level is low";
			}
		}
	
	 void Check_Resperate (float respirate)
		{
			if(respirate > 95)
			{
				cout<<"respiration rate is high";
			}
			else if (respirate < 30)
			{
				cout<<"respiration rate is low";
			}
			else
			{
				cout<<"respiration rate is normal";
			}
		}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  Check_BPM(bpm);
  Check_SPO2(spo2);
  Check_Resperate(respRate);
  
}

int main() {

  //assert(vitalsAreOk(80, 95, 60) == true);
  //assert(vitalsAreOk(60, 90, 40) == false);
  vitalsAreOk(80,95,60);
  vitalsAreOk(60,90,40);

}
