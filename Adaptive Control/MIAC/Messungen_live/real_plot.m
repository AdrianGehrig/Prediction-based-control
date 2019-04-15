figure
p1=subplot(3,1,1)
plot(actual_valueTime,actual_valueValueY,actual_valueTime,SetpointValueY,'LineWidth',2)
legend('actual_ valueValue','SetpointValue')
grid on

p2=subplot(3,1,2)
plot(actual_valueTime,outputValueY, 'LineWidth',2)
legend('outputValue')
grid on

p3=subplot(3,1,3)
plot(actual_valueTime,GainFilteredValueY,actual_valueTime,GainNotFilteredValueY,'LineWidth',2)
legend('GainFilteredValue','GainNotFilteredValue')
grid on

linkaxes([p1,p2,p3],'x')
