#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a + b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >= 60 && n >= 70){
        return "lulus";
    }else { 
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >= 70){
        return "lulus"; 
    }else {
        return "gagal";
    }
}

    int main(){
        double nilaimath, nilaiBindo;


        cout << "masukan nilai matematika : ";
        cin >> nilaimath;
        cout << "masukan nilai bahasa indonesia : ";
        cin >> nilaiBindo; 

        //rerata = (nilaimath + nilaiBindo)/2;

        //rata = rerata(nilaimath, nilaiBindo);
        //st = status(rerata(nilaimath, nilaiBindo));

        // if (rata >= 60){
            // status = "lulus";
            // }else {
                // status = "gagal"; 
                //}

                cout << "nilai rata-rata nya : " << rerata(nilaimath, nilaiBindo);
                cout << "\nStatus kelulusannya : " << status(rerata(nilaimath, nilaiBindo));
                cout << "\nStatus kelulusannya : " << status2((nilaimath, nilaiBindo), nilaimath);
                cout << "\nStatus kelulusannya : " << status3(rerata(nilaimath, nilaiBindo), nilaimath);

    } 
            
        


    
    

    
    
        
