bool lemonadeChange(int* bills, int billsSize) {
    bool fim;
    int i,j=0,k=0,l=0, cincos=0, dezes=0, vintes=0;
    fim=true;
    for(i=0;i<billsSize;i++){
        
        if(bills[i]==5){
          cincos++;
        }
        if(bills[i]==10){
          dezes++;
          if(cincos>0){
            cincos--;
        
          }else
          {fim=false;}
        }
        if(bills[i]==20){
            vintes++;
            if(dezes>0 && cincos>0){
                dezes--;
                cincos--;
            }else
            if(dezes==0 && cincos>2){
                cincos=cincos-3;
            }else
            {fim=false;}
        }
    }
return fim;
}
