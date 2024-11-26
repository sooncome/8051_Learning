# Buzzer Type
      
<img src="./image/01.IC_pinout.png">  

## Piezoelectric Buzzer
Simply apply voltage (1.5~15V DC) will make piezoelectric crystal oscillate, output 1.5k~5kHz sound(fixed).  
Widly use cause of small size and low power comsuption.
## Electromechanical Buzzer
Using the magnetic field of an electromagnet to generate sound.  
Can produce larger sound, change signal frequency can change sound tone.
## Circuit
<img src="./image/01.IC_pinout.png">  

51 chip drive capability is weak, require about 30mA to drive buzzer.  
Use GPIO to drive directly, might cause other GPIO capability become weaker or even STOP work.  
Mostly will use a MOS or BJT to drive the buzzer.
