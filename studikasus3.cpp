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

int main() {
    int pilih, bdg;
    cout << "||============================================||\n";
    cout << "||Developer yang dibutuhkan :                 ||" << endl;
    cout << "||1. Express JS : 15 juta / perbulan          ||" << endl;
    cout << "||2. Django Python : 13 juta / perbulan       ||" << endl;
    cout << "||3. Rails Ruby : 8 juta / perbulan           ||" << endl;
    cout << "||4. Laravel PHP : 18 juta / perbulan         ||" << endl;
    cout << "||5. Spring Java : 8 juta / perbulan          ||"  << endl;
    cout << "||6. Angular JS : 15 juta / perbulan          ||" << endl;
    cout << "||============================================||\n";
    cout << "||berapa bidang yg ingin anda ambil?"<<endl;
    cout<<"||";
    cin >> pilih;

    if (pilih == 1) {
        cout << "||Masukkan bidang anda : "<<endl;
        cout<<"||";
        cin >> bdg;
        switch (bdg) {
        case 1: 
            gji.input1(15);
            break;
        case 2:
            gji.input1(13);
            break;
        case 3:
            gji.input1(8);
            break;
        case 4:
            gji.input1(18);
            break;
        case 5:
            gji.input1(8);
            break;
        case 6:
            gji.input1(15);
            break;

        }

    }
    else if (pilih == 2){
    	float bdg,bdg2;
    	cout << "||Masukkan bidang pertama anda : "<<endl;
    	cout<<"||";
        cin >> bdg;
        cout<<"||Masukan bidang kedua anda : "<<endl;
        cout<<"||";
        cin>>bdg2;
        
        //gaji 1
        if(bdg==1 && bdg2==2)
        	gji.input2(15,13);
        	
        else if(bdg==1 && bdg2==2)
        	gji.input2(15,13);
        	
        else if(bdg==1 && bdg2==3)
        	gji.input2(15,8);
        	
        else if(bdg==1 && bdg2==4)
        	gji.input2(15,18);
        	
        else if(bdg==1 && bdg2==5)
        	gji.input2(15,8);
        	
        else if(bdg==1 && bdg2==6)
        	gji.input2(15,15);
        
        	
        	
        //gaji 2
        else if(bdg==2 && bdg2==1)
        	gji.input2(13,15);
        else if(bdg==2 && bdg2==3)
        	gji.input2(13,8);
        	
        else if(bdg==2 && bdg2==4)
        	gji.input2(15,18);
        
        else if(bdg==2 && bdg2==5)
        	gji.input2(15,8);
        
        else if(bdg==2 && bdg2==6)
        	gji.input2(15,15);
        	
        	
        //gaji 3
        else if(bdg==3 && bdg2==1)
        	gji.input2(8,15);
        	else if(bdg==3 && bdg2==2)
        	gji.input2(8,13);
        else if(bdg==3 && bdg2==4)
        	gji.input2(8,18);
        	
        else if(bdg==3 && bdg2==5)
        	gji.input2(8,8);
        else if(bdg==3 && bdg2==6)
        	gji.input2(8,15);
        //gaji 4
        else if(bdg==4 && bdg2==1)
        	gji.input2(18,15);
        else if(bdg==4 && bdg2==2)
        	gji.input2(18,13);
        else if(bdg==4 && bdg2==3)
        	gji.input2(18,8);
        else if(bdg==4 && bdg2==5)
        	gji.input2(18,8);
        else if(bdg==4 && bdg2==6)
        	gji.input2(18,15);
        //gaji 5
        else if(bdg==5 && bdg2==1)
        	gji.input2(8,15);
      	else if(bdg==5 && bdg2==2)
        	gji.input2(8,13);
        else if(bdg==5 && bdg2==3)
        	gji.input2(8,8);
        else if(bdg==5 && bdg2==4)
        	gji.input2(8,18);
        else if(bdg==5 && bdg2==6)
        	gji.input2(8,15);
			}
        
    		gji.output();
		}
	   //	gji.output();
	   	
