p1=subplot(2,1,1)
plot(actual_valueTime,actual_valueValueY,actual_valueTime,SetpointValueY)
grid on

p2=subplot(2,1,2)
plot(actual_valueTime,outputValueY)
grid on

linkaxes([p1,p2],'x')
