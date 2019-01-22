p1=subplot(4,1,1)
plot(DatumUhrzeit,BLHA0,'LineWidth',2)
legend("Automatik=0",'Location','southwest')
%axis tight
grid on%legend("Automatik=0")

p2=subplot(4,1,2)
plot(DatumUhrzeit,BL, DatumUhrzeit,Kohle, DatumUhrzeit,Gas, 'LineWidth',2)
grid on
legend("BL [%]","Kohle [%]","Gas [%]",'Location','west' )
axis tight

% p3=subplot(4,1,3)
% plot(DatumUhrzeit,Aufgabe,'LineWidth',2)
% grid on
% legend("Aufgabe",'Location','southwest')

p3=subplot(4,1,3)
plot(DatumUhrzeit,VBLIstNmh,DatumUhrzeit,VBLSollNmh,'LineWidth',2)
grid on
legend("VBL Ist [Nmh]","VBL Soll [Nmh]",'Location','southwest')
axis tight

p4=subplot(4,1,4)
plot(DatumUhrzeit,BLSOLLC,DatumUhrzeit,BLISTC,'LineWidth',2)
grid on
legend("Bl soll [°C]","Bl ist [°C]",'Location','southwest')
axis tight



linkaxes([p1,p2,p3,p4],'x')