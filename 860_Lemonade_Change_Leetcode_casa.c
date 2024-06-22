# include <stdio.h>
# include <stdbool.h>

bool LemonadeChange(int* bills, int billsSize);

int main(){
	bool resposta;
	int bills[] = { 5, 5, 5, 10, 20 }, billsSize = 0, *pBills = NULL;
	int i;
	pBills = bills;
	for( i=0; bills[i]; i++ ){
		billsSize++;
	}
	resposta = LemonadeChange( pBills, billsSize );
    printf( "%d", resposta );

}

bool LemonadeChange( int* bills, int billsSize ) {
    bool fim;
    int i, cincos=0, dezes=0, vintes=0;
    fim = true;
    for( i = 0; i < billsSize; i++ ){
        
        if( bills[i] == 5 ){
          cincos++;
        }
        if( bills[i] == 10 ){
          dezes++;
          if( cincos > 0 ){
            cincos--;
        
          }else
          { fim = false; }
        }
        if( bills[i] == 20 ){
            vintes++;
            if( dezes > 0 && cincos > 0 ){
                dezes--;
                cincos--;
            }else
            if( dezes == 0 && cincos > 2 ){
                cincos=cincos-3;
            }else
            { fim = false; }
        }
    }
return fim;
}
