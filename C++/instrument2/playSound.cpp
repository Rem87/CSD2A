#include "instrument.h"
#include "String.h"
#include "Bass.h"
#include "Percussie.h"
#include <stdlib.h>
int main()
{


  String Viool("Viool ");
  Viool.amplitude(40);
  Viool.pitch(600);
  Viool.set_duration(600);
  Viool.play();


  Bass SlapBass("SlapBass ");
  SlapBass.amplitude(30);
  SlapBass.pitch(95);
  SlapBass.set_duration(100);


  SlapBass.play();


  Percussie Bongos("Bongos ");
  Bongos.amplitude(20);
  Bongos.pitch(200);
  Bongos.set_duration(30);

  Bongos.play();



  return 0;
}
