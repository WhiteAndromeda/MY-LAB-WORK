var
i : byte; {номер четверти}
N, Mmax, Rmin : word;  
x, y : integer; {координаты X и Y}
ax : array[1..4] of integer; {минимальной расстояние в четвертях от оси x}
ay : array[1..4] of integer; {минимальной расстояние в четвертях от оси y}
m : array[1..4] of word; {количество точку в четвертях}

begin

  for j :byte := 1 to 4 do
  begin
    m[j] := 0;
    ax[j] := 32000;
    ay[j] := 32000;
  end;

  readln(N);
  for j : word := 1 to N do
  begin
  
    read(x);
    read(y);
    readln;
    
    i := 0;
    if x >0 then
    begin
      if y > 0 then i := 1;
      if y < 0 then i := 4;
    end;
    if x < 0 then
    begin
      if y > 0 then i := 2;
      if y < 0 then i := 3;
    end;
    
    if i > 0 then
    begin
      Inc(m[i]);
      if abs(ax[i]) < abs(ay[i]) then
      begin
        if (abs(x) < abs(ax[i]))  or (abs(y) < abs(ax[i])) then
        begin
          ax[i] := x;
          ay[i] := y;
        end
      end
      else
        if (abs(x) < abs(ay[i])) or (abs(y) < abs(ay[i])) then
        begin
          ax[i] := x;
          ay[i] := y;
        end;
    end;
            
  end;
  
  Mmax := M[1];
  for j : byte := 2 to 4 do
    if M[j] > Mmax then Mmax := M[j];
    
  Rmin := 32000;
  for J : byte := 1 to 4 do
    if M[j] = Mmax then
    begin
      if abs(ax[j]) < Rmin then Rmin := abs(ax[j]); 
      if abs(ay[j]) < Rmin then Rmin := abs(ay[j]);
    end;
    
  for j : byte := 1 to 4 do  
    if (M[j] = Mmax) and ((Rmin = abs(ax[j])) or (Rmin = abs(ay[j]))) then 
    begin
      writeln('K = ',j);
      writeln('M = ',Mmax);
      writeln('A = (',ax[j],', ',ay[j],')');
      writeln('R = ',Rmin);
      break;
    end

end.