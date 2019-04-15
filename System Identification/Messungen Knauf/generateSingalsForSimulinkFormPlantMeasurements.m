
Startpunkt=find(Brennerleistung_Uhrzeit=='05-Feb-2019 10:36:43')


Feb05_BL_sim=           [([Startpunkt:1:'end']*5)' BL];

find(isnan(BLSOLLC)) % Es befinden sich NaN in der Messung
BLSOLLCfixed=fillmissing(BLSOLLC,'pchip'); % NaN interpolieren
sum(isnan(BLSOLLCfixed)) 
disp("NaN bereinigt")
Jannuar22Abweichung=BLSOLLCfixed-BLISTCfixed;
sum(isnan(Jannuar22Abweichung))

Jannuar22_Abweichung_Sim=   [([0:1:68646]*5)' Jannuar22Abweichung];

%Zuschneiden

%Auto1 von 5.024e+04 bis 5.264e+04

Jannuar22Auto1_BL_sim=           [([0:1:5.264e+04 - 5.024e+04]*5)' BLfixed(5.024e+04 : 5.264e+04)];
Jannuar22Auto1Abweichung=        Jannuar22Abweichung(5.024e+04 : 5.264e+04);
Jannuar22Auto1_Abweichung_Sim=   [([0:1:5.264e+04 - 5.024e+04]*5)' Jannuar22Auto1Abweichung];



%Auto2 von 5.979e+04 bis 6.749e+04

Jannuar22Auto2_BL_sim=           [([0:1:6.749e+04 - 5.979e+04]*5)' BLfixed(5.979e+04 :6.749e+04)];
Jannuar22Auto2Abweichung=        Jannuar22Abweichung(5.979e+04 :6.749e+04);
Jannuar22Auto2_Abweichung_Sim=   [([0:1:6.749e+04 - 5.979e+04]*5)' Jannuar22Auto2Abweichung];

 