#include <iostream>
#include <math.h>
using namespace std;

class gaji {
public:
    float gaji, lama, bidang;
    float awal;
    float awal2;
    float gaji2;
    float bonusleader , bonuslama, total;
    char leader, bdg, bdglain ,pengalaman;
    int bdg2;
    char pgl;

    void input1(float a);
    void input2(float a, float b);
    void output();
}gji;

void gaji::input1(float a) {
    cout << "||Berapa tahun pengalaman anda dalam bidang tersebut ? ";
    cin >> gji.lama;
    if (gji.lama<4) {
        cout << "||Apakah anda pernah menjadi leader sebelumnya ? ";
        cin >> gji.leader;
        switch(gji.leader){
        	
       case 'y':
            gji.awal = a;
            gji.bonusleader = a * 0.06;
            gji.total = a + gji.bonusleader;
            break;
        
        case 't':
            gji.awal = a;
            gji.bonusleader = 0;
            gji.total = a;
    }
    }
    else if (gji.lama>4) {
        cout << "||Apakah anda pernah menjadi leader sebelumnya ? ";
        cin >> gji.leader;
        switch (gji.leader){
		
        
        case 'y':
            gji.awal = a;
            gji.bonuslama = a * 0.04;
            gji.bonusleader = a * 0.06;
            gji.total = a + gji.bonusleader + gji.bonuslama;
            break;
        
        case 't': 
            gji.awal = a;
            gji.bonuslama = a * 0.04;
            gji.bonusleader = 0;
            gji.total = a + gji.bonuslama;
            break;
        }
        
    
    }
    
    system("cls");
}

void gaji::input2(float a, float b) {
	cout << "||Berapa tahun pengalaman anda dalam kedua bidang tersebut ? ";
    cin >> gji.lama;
    if (gji.lama<2.5){
    	cout<<"Anda tidak bisa mengikuti bidang ini! ";
    }
    else if (gji.lama>2.5){
		cout << "||Apakah anda pernah menjadi leader sebelumnya ?(y/t)";
        cin >> gji.leader;
        switch (gji.leader){
        case 'y':  
        	gji.awal2 = b-(b*0.09);
        	gji.gaji2 = a-(a*0.09);
            gji.awal = gji.awal2+gji.gaji2;
            gji.bonusleader = a * 0.06;
            gji.total = gji.awal2+gji.gaji2+gji.bonusleader;
            break;
        
        case 't':
            gji.gaji2 = a-(a*0.09);
            gji.awal2 = b-(b*0.09);
            gji.awal = a+b;
            gji.bonusleader = 0;
            gji.total = gji.gaji2+gji.awal2;
            
        }
    }
		
		
		system("cls");
		
}
	
		
	




void gaji::output() {
    cout << "||============================================ \n";
    cout << "||Gaji Bidang Anda        : " << gji.awal << " Juta Perbulan\n";
    cout << "||Bonus Pengalaman        : " << gji.bonuslama << " Juta Perbulan    \n";
    cout << "||Bonus Pengalaman Leader : " << gji.bonusleader << " Juta Perbulan  \n";
    cout << "||Total Gaji Anda         : " << gji.total << " Juta Rupiah  \n";
    cout << "||============================================ \n";

}
