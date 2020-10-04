#include <assert.h>
#include<bits/stdc++.h>
using namespace std;

float minBpm,maxBpm;
float minSpo2;
float minRespirate,MaxRespirate;
 void VitalsRangeChecker(float _minBpm,float _maxBpm, float _minSpo2, float _minRespirate, float _maxRespirate)
 {
   minBpm=_minBpm;
   maxBpm=_maxBpm;
   minSpo2=_minSpo2;
   minRespirate=_minRespirate;
   MaxRespirate=_maxRespirate;
 }

		 bool Check_BPM (float bpm)
		{
			if (bpm > maxBpm || bpm < minBpm)
			{
				return false;
			}
		  return true;
		}
	bool Check_SPO2 (float spo2)
		{
			if(spo2 > minSpo2)
			{
				return true;
			}
			return false;
		}
	
	 bool Check_Resperate (float respirate)
		{
			if(respirate < minRespirate || respirate > MaxRespirate  )
			{
				return false;
			}
			return true;
		}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
 bool checkBpm= Check_BPM(bpm);
 bool checkSpo2= Check_SPO2(spo2);
bool checkRespirate=Check_Resperate(respRate);
return (checkBpm && checkSpo2 && checkRespirate);  
}

int main() {
VitalsRangeChecker(70,150,90,30,95);
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);

}
