function Gs = IdentTF(u, y, t, n, m, varargin)
% IdentTF   Identifikation einer Übertragungsfunktion
% Gs = IdentTF(u, y, t, n, m) identifiziert eine Übertagungsfunktion Gs aus
% Messdaten u und y mit Hilfe der fminsearch-Methode. In jeder Iteration
% werden alle Signal in einem Bild dargestellt.
% Eingabeparameter:
%  u = Eingangssignal                 (Nx1-Vektor)
%  y = Streckenausgangssignal         (Nx1-Vektor)
%  t = Zeitvektor                     (Nx1-Vektor)
%  n = Ordnung des Nennerpolynoms     (default: n=1)
%  m = Ordnung des Zählerpolynoms     (default: m=0)
% Ausgabeparameter:
%  Gs = Geschätzte Übertragungsfunktion als tf-Objekt.
% Die Funktion kann mit 3, 4 oder 5 Eingabeparametern aufgeruft werden.
% Beispiele: Gs = IdentTF(u, y, t, 2, 1)
%            Gs = IdentTF(u, y, t, 2)
%            Gs = IdentTF(u, y, t)

% Autor: A. ALi, FHWS

if nargin<3,
    error('Mindestens drei Eingabeparameter u, y und t sind notwendig!'),
elseif nargin<4, % PT1 wird angenommen
    m=0;
    n=1;
elseif nargin<5,
    m=0;
end
if n<m,
    error('n darf nicht kleiner als m sein!')
end
min_ny = min(size(y));
min_nu = min(size(u));
min_nt = min(size(t));
max_ny = max(size(y));
max_nu = max(size(u));
max_nt = max(size(t));
if (min_ny~=1) | (min_nu~=1) | (min_nt~=1),
    error('Ungültige Dimensionen von Datenvektoren: Alle Vektoren (u,y und t) müssen genau eine Spalte haben.');
end
if (max_ny~=max_nu) | (max_ny~=max_nt),
    error('Ungültige Dimensionen von Datenvektoren: Alle Vektoren (u,y und t) müssen die gleiche Länge haben.');
end
disp('Bitte warten....')
x = ones(m+n+1,1);
opt=optimset('maxfunevals',2000);
x=fminsearch(@TFOBj, x, opt, u, y, t, n, m);
Gs=tf(x(1:m+1)',[x(m+2:m+n+1); 1]'); % hier in die +1 Schreibweise bringen
%Gs=tf(x(1:m+1)',[x(m+2:m+n+1); 1]');
disp('...fertig!')

function sse=TFOBj(x,u,y,t, n, m)
Gs=tf(x(1:m+1)',[x(m+2:m+n+1); 1]');
ym=lsim(Gs,u,t);

figure(2001)
plot(t,u,t,y,t,ym)
drawnow
shg
sse=sum((ym-y).^2);