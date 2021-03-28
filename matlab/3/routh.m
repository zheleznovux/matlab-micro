function r = routh(p)

n=length(p);
m=round(n/2);
r=zeros(n,m);
r(1,:)=p(1:2:n);
r(2,1:fix(n/2))=p(2:2:n);
m=m-1;

for i=3:n
    den=r(i-1,1);
    
    if den==0
        den=realmin;
    end
    
    nom=r(i-2,1);
    if abs(nom)==Inf
        nom=realmax*sign(nom);
    end
    
    j=1:m;
    r(i,j)=r(i-2,j+1)-r(i-1,j+1)*nom/den;
    
    if r(i,:)==0 & i<n-1
        ni=n+1-i;
        
        for j=1:m
            r(i,j)=r(i-1,j)*ni;
            ni=ni-2;
        end
    end
end
    