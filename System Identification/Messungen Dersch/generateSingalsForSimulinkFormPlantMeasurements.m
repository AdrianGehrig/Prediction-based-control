
Jannuar22_BL_sim=           [([0:1:68646]*5)' BLfixed];

find(isnan(BLSOLLC)) % Es befinden sich NaN in der Messung
BLSOLLCfixed=fillmissing(BLSOLLC,'pchip'); % NaN interpolieren
sum(isnan(BLSOLLCfixed)) 
disp("NaN bereinigt")
Jannuar22Abweichung=BLSOLLCfixed-BLISTCfixed;

Jannuar22_Abweichung_Sim=   [([0:1:68646]*5)' Jannuar22Abweichung];
