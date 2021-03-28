function r=hurwitz(p)
n=length(p)-1;    %�������� �������(�����) ��������
if n<=1
    return;
end 
r=zeros(n);         %������������ ������� �������
m=1;
for i=1:2:n
    k=1;
    for j=m:n
        if k<=n
            r(i,j)=p(1+k); %����-�� � ��������� ��������� (������� ������)
        end
        if k<=n+1 & i<n
            r(1+i,j)=p(k); %����-�� � ������� ��������� (������ ������)
        end
        k=k+2;
    end
    m=m+1;
end
for i=1:n            %���������� ������������ �������
    Determinants(i)=det(r(1:i,1:i));
end
Determinants     %����� �������� �������������
end
    