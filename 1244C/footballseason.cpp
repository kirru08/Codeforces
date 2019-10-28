        #include <bits/stdc++.h>
        #define ll long long
         
        using namespace std;
         
        int main(void)
        {
        	ll int n, p, w, d;
        	cin>>n>>p>>w>>d;
        	ll int wins=0, draws=0, losses=0;
        	if(p>(n*w) || p<d && p>0)
        	{
        		cout<<-1<<"\n";
        		return 0;
        	}
              
        	else
        	{
        		for(draws=0; draws<=w-1; draws++)
        		{
        			if((p-draws*d)>=0 && (draws+(p-draws*d)/w)<=n && ((p-draws*d)%w)==0)
        				{
        					wins = ((p-draws*d)/w);
        					losses = n-(draws+wins); 
        					break;
        				}
        		}
        	}
         
        	losses=n-(wins+draws);
     
        	if((wins*w+draws*d)!=p)
        	{
        		cout<<-1<<"\n";
        		return 0;
        	}	
     
      	  	cout<<wins<<" "<<draws<<" "<<losses;
        	cout<<"\n";
        	return 0;
        }
