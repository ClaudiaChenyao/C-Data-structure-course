//
//  main.cpp
//  final_porject_ds
//
//  Created by apple on 6/17/18.
//  Copyright © 2018 Claudia. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    //initialize the tortoise and hare position, and declare the randomNumber
    int tortoise = 1;
    int hare = 1;
    int randomNumber;
    
    //start the game
    cout << "Bang! Off they go!\n" << endl;
    
    //enter the game
    while (true){
        randomNumber = (rand() % 10) + 1;  //generate the random number
        
        //when random number is 1
        if(randomNumber == 1){
            cout<<"Tortoise move type is Fast Plod"<<endl;
            tortoise += 3;
            cout<<"Hare move type is Sleep" << endl;
            hare += 0;
        }
        //when random number is 2
        else if(randomNumber == 2){
            cout<<"Tortoise move type is Fast Plod"<<endl;
            tortoise += 3;
            cout<<"Hare move type is Sleep" << endl;
            hare += 0;
        }
        //when random number is 3
        else if(randomNumber == 3){
            cout<<"Tortoise move type is Fast Plod"<<endl;
            tortoise += 3;
            cout<<"Hare move type is Big Hop" << endl;
            hare += 9;
        }
        //when random number is 4
        else if(randomNumber == 4){
            cout<<"Tortoise move type is Fast Plod"<<endl;
            tortoise += 3;
            cout<<"Hare move type is Big Hop" << endl;
            hare += 9;
        }
        //when random number is 5
        else if(randomNumber == 5){
            cout<<"Tortoise move type is Fast Plot"<<endl;
            tortoise += 3;
            cout<<"Hare move type is Big Slip" << endl;
            hare -= 12;
        }
        //when random number is 6
        else if(randomNumber == 6){
            cout<<"Tortoise move type is Slip"<<endl;
            tortoise -= 6;
            cout<<"Hare move type is Small Hop" << endl;
            hare += 1;
        }
        //when random number is 7
        else if(randomNumber == 7){
            cout<<"Tortoise move type is Slip"<<endl;
            tortoise -= 6;
            cout<<"Hare move type is Small Hop" << endl;
            hare += 1;
        }
        //when random number is 8
        else if(randomNumber == 8){
            cout<<"Tortoise move type is Slow Plod"<<endl;
            tortoise += 1;
            cout<<"Hare move type is Small Hop"<<endl;
            hare += 1;
        }
        //when random number is 9
        else if(randomNumber == 9){
            cout<<"Tortoise move type is Slow Plod"<<endl;
            tortoise += 1;
            cout<<"Hare move type is Small Slip"<<endl;
            hare -= 2;
        }
        //when random number is 10
        else if(randomNumber == 10){
            cout<<"Tourtoise move type is Slow Plod"<<endl;
            tortoise += 1;
            cout<<"Hare Move type is Small Slip"<<endl;
            hare -= 2;
        }
        
    
        //if tortoise position is out of range
        if (tortoise < 1){
            tortoise = 1;
        }
        else if (tortoise > 70){
            tortoise = 70;
        }
        
        //if hare position is out of range
        if (hare < 1){
            hare = 1;
        }
        else if (hare > 70){
            hare = 70;
        }
        
        //generate the 70-position line
        string position = "";
        //for the situation that the tortoise position is the same with hare
        if(tortoise == hare){
            
            for(int i = 1; i < tortoise; i++){
                position += "-";
            }
            position += "BUMP!";
            for(int j = 66; j > tortoise; j--){
                position += "-";
            }
        }
        //for the situation that the tortoise is faster than hare
        else if(tortoise > hare){
            for(int i = 1; i< hare; i++){
                position +="-";
            }
            position += "H";
            for(int j = hare; j<(tortoise-1); j++){
                position += "-";
            }
            position += "T";
            for(int k = 70; k > tortoise; k--){
                position += "-";
            }
        }
        //for the situation that the tortoise is slower than the hare
        else if(tortoise < hare){
            cout<<"here"<<endl;
            for(int i = 1; i< tortoise; i++){
                position +="-";
            }
            position += "T";
            for(int j = tortoise; j < (hare-1); j++){
                position += "-";
            }
            position += "H";
            for(int k = 70; k > hare; k--){
                position += "-";
            }
        }
        //print out the 70-position line
        cout<<position<<endl;
        
        //if tortoise or hare position is equal or larger than 70, break out of the while loop
        if ((tortoise == 70) && (hare == 70)){
            cout << "TIE!" << endl;
            break;
        }
        
        else if (hare == 70){
            cout << "HARE IS THE WINNER!" << endl;
            break;
        }
        
        else if (tortoise == 70){
            cout << "TORTOISE IS THE WINNER!" << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}


