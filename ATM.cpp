#include <iostream>
using namespace std;

     //  VARIABLES  //
const int NumCard1 = 1234567;  // 1 And +
const int NumCard2 = 3691215;  // 3 And + 
const int NumCard3 = 5101520;  // 5 And +
const int PasCard1 = 1357;     // Num Then Skip...
const int PasCard2 = 3915;     // Num Then Skip...
const int PasCard3 = 51520;    // Num Then Skip...
int BlcCard1 = 1000;
int BlcCard2 = 3000;
int BlcCard3 = 5000;
int deposit = 0;
int withDraw = 0;
int choice;
bool run = true;


void ROLE();

void menu();

void process1();

void process2();

void process3();



int main() {
  while(run) {
    cout << "\n\n<=-=-=-=-=-=-=-=-=-=-=-=>\n\n";
    ROLE();
    run = false;
    cout << "\n\nTo Try Again Enter 1 =>  ";
    cin >> run;
  }
  
  return 0;
}
  

void ROLE() { // Enter Credit And Password

  // bool choice = false;
  // cout << "If You Need To Exit Enter 1\n";
  // cin >> choice;
  // if(choice == true)
  //   return;
  
  cout << " =====> ATM <===== \n";

  int credit, pass;
  cout << "- Please Enter Your Credit -\n";
  cin >> credit;

  if(credit == NumCard1) {
    cout << "\n- Please Enter Password -\n";
    int i;
    for(i = 0; i < 4; i++)
      {
        cin >> pass;
        if(pass == PasCard1)
        {
          process1();
          break;
        }
        else
          cout << "\nIn Correct Password, Try Again...\n";
      }
      
      if(i == 4)
      {
        cout << "!. You Used All Tries, Return To Credit Step .!\n";
        ROLE();
      }

  } else if(credit == NumCard2) {
    cout << "\n- Please Enter Password -\n";
    int i;
    for(i = 0; i < 4; i++)
      {
        cin >> pass;
        if(pass == PasCard2)
        {
          process2();
          break;
        }
        else
        cout << "\nIn Correct Password, Try Again...\n";
      }
      
      if(i == 4)
      {
        cout << "!. You Used All Tries, Return To Credit Step .!\n";
        ROLE();
      }
      
      
    } else if(credit == NumCard3) {
      cout << "\n- Please Enter Password -\n";
      int i;
      for(i = 0; i < 4; i++)
      {
        cin >> pass;
        if(pass == PasCard3)
        {
          process3();
          break;
        }
        else
        cout << "\nIn Correct Password, Try Again...\n";
      }
      
      if(i == 4)
      {
        cout << "!. You Used All Tries, Return To Credit Step .!\n";
        ROLE();
      }
      
      
    } else {
      cout << "- Valid Card, Try Again...\n";
      ROLE();
    }
  }

void menu() {
  cout << "  =--=> MENU <=--=\n";
  cout << "  = 1-  Balance  =\n";
  cout << "  = 2-  Withdraw =\n";
  cout << "  = 3-  Deposit  =\n";
  cout << "=-=-=-=-=--=-=-=-=-=\n";
  cout << "  =>  ";
}

void process1() { 
  menu();
  cin >> choice;
  bool again1 = false;
  bool again2 = false;
  
  switch(choice){
    case 1:
    cout << "- The Balance In This Card Is: " << BlcCard1 << endl;
    break;
    
    case 2:
    int withD;
    cout << "Enter The Money You Need To Withdraw\n";
    cin >> withD;
    if(withD <= BlcCard1){
      BlcCard1 -= withD;
      cout << "Process Is Done\n";
    } else {
      int i;
      for(i = 0; i < 3; i++) {
      cout << "\nYou Do Not Have Enough Money";
      process1();
      }
      if(i == 3) {
        cout << "You Used All Tries, Return To Menu\n";
        ROLE();
      }
    }
    
    cout << "\nTo Know About Your Balance After This Process Enter 1\n";
    cin >> again1;
    if(again1 == true)
    cout << "Your Balance After Deposit Is: " << BlcCard1;
    
    break;
    
    case 3:
    int depo;
    cout << "Enter The Money You Need To Deposit\n";
    cin >> depo;
    BlcCard1 += depo;
    cout << "Process Is Done\n";
    
    cout << "\nTo Know About Your Balance After This Process Enter 1\n";
    cin >> again2;
    if(again2 == true)
    cout << "Your Balance Now Is: " << BlcCard1;
    
    break;
    
    case 4:
    break;
    
  }
}

void process2() { 
  menu();
  cin >> choice;
  bool again1 = false;
  bool again2 = false;
  
  
  switch(choice){
    case 1:
    cout << "The Balance In This Card Is: " << BlcCard2 << endl;
    break;
    
    case 2:
    int withD;
    cout << "Enter The Money You Need To Withdraw\n";
    cin >> withD;
    if(withD <= BlcCard2){
      BlcCard2 -= withD;
      cout << "Process Is Done\n";
    } else {
      int i;
      for(i = 0; i < 3; i++) {
      cout << "\nYou Do Not Have Enough Money";
      process2();
      }
      if(i == 3) {
        cout << "You Used All Tries, Return To Menu\n";
        ROLE();
      }
    }
    
    cout << "\nTo Know About Your Balance After This Process Enter 1\n";
    cin >> again1;
    if(again1 == true)
    cout << "Your Balance After Deposit Is: " << BlcCard2;
    
    break;
    
    case 3:
    int depo;
    cout << "Enter The Money You Need To Deposit\n";
    cin >> depo;
    BlcCard2 += depo;
    cout << "Process Is Done\n";
    
    cout << "\nTo Know About Your Balance After This Process Enter 1\n";
    cin >> again2;
    if(again2 == true)
    cout << "Your Balance Now Is: " << BlcCard2;
    
    break;
    
    case 4:
    break;
    
  }
}

void process3() { 
  menu();
  cin >> choice;
  bool again1 = false;
  bool again2 = false;
  
  
  switch(choice){
    case 1:
    cout << "The Balance In This Card Is: " << BlcCard2 << endl;
    break;

    case 2:
      int withD;
      cout << "Enter The Money You Need To Withdraw\n";
      cin >> withD;
      if(withD <= BlcCard2){
        BlcCard2 -= withD;
        cout << "Process Is Done\n";
      } else {
        int i;
        for(i = 0; i < 3; i++) {
        cout << "\nYou Do Not Have Enough Money";
        process1();
        }
        if(i == 3) {
          cout << "You Used All Tries, Return To Menu\n";
          ROLE();
        }
      }

      cout << "\nTo Know About Your Balance After This Process Enter 1\n";
      cin >> again1;
      if(again1 == true)
        cout << "Your Balance After Deposit Is: " << BlcCard2;

      break;

    case 3:
      int depo;
      cout << "Enter The Money You Need To Deposit\n";
      cin >> depo;
      BlcCard2 += depo;
      cout << "Process Is Done\n";

      cout << "\nTo Know About Your Balance After This Process Enter 1\n";
      cin >> again2;
      if(again2 == true)
        cout << "Your Balance Now Is: " << BlcCard2;

      break;

    case 4:
      break;

  }
  
}


  