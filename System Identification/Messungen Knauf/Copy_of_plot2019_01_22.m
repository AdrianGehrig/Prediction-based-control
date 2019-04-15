figure
p1=subplot(5,1,1)
area(DatumUhrzeit,BLHA0)
legend("Hand=1 Automatik=0",'Location','northwest')
axis tight
grid on
pos = get( p1(1), 'Position' );
pos(4) =pos(4)/ 10;                        % Increase height.
pos(2) =0.95
set( p1(1), 'Position', pos ) ;

offset=0.9
abstand=1/5
hoehe=1/6


p2=subplot(5,1,2)
plot(DatumUhrzeit,BL,'b',DatumUhrzeit,Kohle,'k', DatumUhrzeit,Gas,'g', 'LineWidth',2)
grid on
legend("BL [%]","Kohle [%]","Gas [%]",'Location','west' )
axis tight
pos = get( p2(1), 'Position' );                
pos(2) =offset-abstand
pos(4) =hoehe                        % Increase height.
set( p2(1), 'Position', pos ) ;

p3=subplot(5,1,3)
plot(DatumUhrzeit,KohleISTKgh,DatumUhrzeit,KohleSOLLKgh,'k')
legend("Kohle ist", "Kohle soll",'Location','southwest')
grid on

axis tight
pos = get( p3(1), 'Position' );                
pos(2) =offset-2*abstand
pos(4) =hoehe                        % Increase height.
set( p3(1), 'Position', pos ) ;


p4=subplot(5,1,4)
plot(DatumUhrzeit,VBLSollNmh,DatumUhrzeit,VBLIstNmh,'LineWidth',2)
grid on
legend("VBL Soll [Nmh]","VBL Ist [Nmh]",'Location','southwest')
axis tight
pos = get( p4(1), 'Position' );                    
pos(2) =offset-3*abstand
pos(4) =hoehe                        % Increase height.
set( p4(1), 'Position', pos ) ;

p5=subplot(5,1,5)
plot(DatumUhrzeit,BLSOLLC,DatumUhrzeit,BLISTC,'LineWidth',2)
grid on
legend("Bl soll [°C]","Bl ist [°C]",'Location','southwest')
axis tight
pos = get( p5(1), 'Position' );                  
pos(2) =offset-4*abstand
pos(4) =hoehe                        % Increase height.
set( p5(1), 'Position', pos ) ;



linkaxes([p1,p2,p3,p4,p5],'x')