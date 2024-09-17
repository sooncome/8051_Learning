# Start New Project on Keil C51

Start new project in Keil C51  
Project → New uVersion Project → **New Project name**  
    
<img src="./Image/01.NewProject.png">    
Core of 51IC is relatively similiar, can chose and 89C52 chip, select Atml as example
  
**DO NOT** need to add standard start up code for 8051  
    
<img src="./Image/02.SelectIC.png">  
  
## ADD Add File to Project
Every project require one and only one **"main.c"** code  
Create it and right click on **Source Group 1** to **"Add File to..."**

  <img src="./Image/03.AddMain.png">  

## Setup for Create Hex file
  
Create hex for burning, Keil default do not create it, need to change setting
  
  <img src="./Image/04.CreatHex.png">  

# Hex Download to MCU
## Select Corresponding MCU type  

MCU need to be exact same, 89C series can not use Check MCU, but can click on MCU Type to search  
  <img src="./Image/05.ISP_IC_Select.png">  

## Select Hex and Download to MCU
Open target hex file, and Download to MCU  

> [!IMPORTANT]
> MCU requires power ON-OFF to download program  
  
  <img src="./Image/06.SelectHex_Burn.png">  
