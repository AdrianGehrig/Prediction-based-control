figure
p1=subplot(6,1,1)
area(DatumUhrzeit,BLHA0)
legend("Hand=1 Automatik=0",'Location','northwest')
axis tight
grid on
pos = get( p1(1), 'Position' );
pos(4) =pos(4)/ 10;                        % Increase height.
pos(2) =0.95
set( p1(1), 'Position', pos ) ;

offset=0.9
abstand=1/5.9
hoehe=1/6


p2=subplot(6,1,2)
plot(DatumUhrzeit,BL,'b',DatumUhrzeit,Kohle,'k', DatumUhrzeit,Gas,'g', 'LineWidth',2)
grid on
legend("BL [%]","Kohle [%]","Gas [%]",'Location','west' )
axis tight
pos = get( p2(1), 'Position' );                
pos(2) =offset-abstand
pos(4) =hoehe                        % Increase height.
set( p2(1), 'Position', pos ) ;

 p3=subplot(6,1,3)
plot(DatumUhrzeit,KohleISTKgh,DatumUhrzeit,KohleSOLLKgh,'r')
legend("Kohle ist [kg/h]", "Kohle soll [kg/h]",'Location','southwest')

% plot(DatumUhrzeit,VBLSollNmh,DatumUhrzeit,VBLIstNmh,'LineWidth',2)
% legend("VBL Soll [Nmh]","VBL Ist [Nmh]",'Location','southwest')


grid on

axis tight
pos = get( p3(1), 'Position' );                
pos(2) =offset-2*abstand
pos(4) =hoehe                        % Increase height.
set( p3(1), 'Position', pos ) ;


p4=subplot(6,1,4)

plot(DatumUhrzeit,Kohlegewicht)
grid on
legend("Behälter [kg]",'Location','southwest')

% plot(DatumUhrzeit,VBLSollNmh,DatumUhrzeit,VBLIstNmh,'LineWidth',2)
% grid on
% legend("VBL Soll [Nmh]","VBL Ist [Nmh]",'Location','southwest')

% plot(DatumUhrzeit,SaugzAbgas,'LineWidth',2)
% grid on
% legend("SaugAbgas [Druck]]",'Location','southwest')

axis tight
pos = get( p4(1), 'Position' );                    
pos(2) =offset-3*abstand
pos(4) =hoehe                        % Increase height.
set( p4(1), 'Position', pos ) ;


p5=subplot(6,1,5)
plot(DatumUhrzeit,Aufgabe)
grid on
legend("Aufgabe [T/h]", 'Location','southwest')
axis tight
pos = get( p5(1), 'Position' );                  
pos(2) =offset-4*abstand
pos(4) =hoehe                        % Increase height.
set( p5(1), 'Position', pos ) ;


p6=subplot(6,1,6)
plot(DatumUhrzeit,BLSOLLC,DatumUhrzeit,BLISTC,'LineWidth',2)
grid on
legend("Bl soll [°C]","Bl ist [°C]",'Location','southwest')
axis tight
pos = get( p6(1), 'Position' );                  
pos(2) =offset-5*abstand
pos(4) =hoehe                        % Increase height.
set( p6(1), 'Position', pos ) ;

linkaxes([p1,p2,p3,p4,p5,p6],'x')




% figure
% p21=subplot(4,1,1)
% plot(DatumUhrzeit,KohleISTKgh)
% legend("KohleISTKgh",'Location','northwest')
% axis tight
% grid on
% 
% p22=subplot(4,1,2)
% plot(DatumUhrzeit,BefllungEin1)
% legend("BefllungEin1",'Location','northwest')
% axis tight
% grid on
% 
% p23=subplot(4,1,3)
% plot(DatumUhrzeit,Kohlegewicht)
% legend("Kohlegewicht",'Location','northwest')
% axis tight
% grid on
% 
% p24=subplot(4,1,4)
% plot(DatumUhrzeit,KohlegewichtkgDiff)
% legend("KohlegewichtkgDiff",'Location','northwest')
% axis tight
% grid on
% linkaxes([p21,p22,p23,p24],'x')
% 
% figure
% 
% p31=subplot(2,1,1)
% plot(DatumUhrzeit,BLSOLLC,DatumUhrzeit,BLISTC,'LineWidth',2)
% grid on
% legend("Bl soll [°C]","Bl ist [°C]",'Location','southwest')
% axis tight
% 
% p32=subplot(2,1,2)
% plot(DatumUhrzeit,SaugzAbgas)
% legend("SaugzAbgas",'Location','northwest')
% axis tight
% grid on
% 
% 
% linkaxes([p31,p32],'x')


figure
 
p31=subplot(3,1,1)
plot(DatumUhrzeit,BL,DatumUhrzeit,Gas,'LineWidth',2)
grid on
legend("Bl [%]","Gas [%]",'Location','southwest')
axis tight

p32=subplot(3,1,2)
plot(DatumUhrzeit,BL./Gas,'LineWidth',2)
grid on
legend("Verhältnis Brennerleistung zu Gas ",'Location','southwest')
axis tight

p33=subplot(3,1,3)
plot(DatumUhrzeit,GasISTNmh,DatumUhrzeit,GasSOLLNmh,'LineWidth',2)
grid on
legend("GasIstnmH [nmH]","GasSollnmH[nmH]",'Location','southwest')
axis tight


linkaxes([p31,p32,p33],'x')