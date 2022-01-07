
int main(){
    float change; 
    do
    {
        cout << "Amount to be changed(give the input in dollar): ";
        cin >> change;
    } while (change < 0.01);
    
    int coin1, coin5, coin10, coin25;
    coin25= 0;
    coin10 = 0;
    coin5= 0;
    coin1 = 0; 
    int cents = round(100 * change);  
    
    while (cents > 0)
    {
        
        if(cents >= 25){ 
            cents = (cents - 25);  
            coin25++;
        } 
        else if(cents >= 10 && cents < 25){ 
            cents = (cents - 10); 
            coin10++;
        } 
        else if(cents >= 5 && cents < 10){ 
            cents = (cents - 5); 
            coin5++;
        } 
        else{ 
            cents  = (cents  - 1); 
            coin1++;
        } 
    }  
    int coin = (coin1 + coin5 + coin10 + coin25); 
    cout << coin << endl;
    //cout << "Change returned " << coin << " coins  "<< endl;
    //cout<<"Of value "<<coin1<<" penny "<<coin5<<" nickel "<<coin10<<" dime "<<coin25<<" quater"<<endl;
    return 0;
