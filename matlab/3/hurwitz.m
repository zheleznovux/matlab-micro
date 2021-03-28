function r=hurwitz(p)
n=length(p)-1;    %проверка пор€дка(длины) полинома
if n<=1
    return;
end 
r=zeros(n);         %формирование матрицы √урвица
m=1;
for i=1:2:n
    k=1;
    for j=m:n
        if k<=n
            r(i,j)=p(1+k); %коэф-ты с нечетными индексами (верхн€€ строка)
        end
        if k<=n+1 & i<n
            r(1+i,j)=p(k); %коэф-ты с четными индексами (втора€ строка)
        end
        k=k+2;
    end
    m=m+1;
end
for i=1:n            %вычисление диагональных миноров
    Determinants(i)=det(r(1:i,1:i));
end
Determinants     %вывод значений определителей
end
    