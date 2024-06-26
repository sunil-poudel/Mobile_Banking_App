// This is simple yet functional fun mobile banking app!
// Main method at line 263
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
//classes
class welcome_setup;
class login_page;
class login;
class main_page{
private:
    int moneyCurrent;
public:
    static void display(string dayTime);
};
string myQuote = "Press 4 to update quote!\n";
class quote{
public:
    static string quoteOfTheDay[50];
    static string author[50];
    static int count;
    static void updateQuote(){
        count++;
        myQuote = quoteOfTheDay[count]+" ~ "+author[count]+'\n';
    }
};
int quote::count = -1;
string quote::quoteOfTheDay[50] = {
        "Genius is one percent inspiration and ninety-nine percent perspiration.",
        "You can observe a lot just by watching.",
        "A house divided against itself cannot stand.",
        "Difficulties increase the nearer we get to the goal.",
        "Fate is in your hands and no one elses",
        "Be the chief but never the lord.",
        "Nothing happens unless first we dream.",
        "Well begun is half done.",
        "Life is a learning experience, only if you learn.",
        "Self-complacency is fatal to progress.",
        "Peace comes from within. Do not seek it without.",
        "What you give is what you get.",
        "We can only learn to love by loving.",
        "Life is change. Growth is optional. Choose wisely.",
        "You'll see it when you believe it.",
        "Today is the tomorrow we worried about yesterday.",
        "It's easier to see the mistakes on someone else's paper.",
        "Every man dies. Not every man really lives.",
        "To lead people walk behind them.",
        "Having nothing, nothing can he lose.",
        "Trouble is only opportunity in work clothes.",
        "A rolling stone gathers no moss.",
        "Ideas are the beginning points of all fortunes.",
        "Everything in life is luck.",
        "Doing nothing is better than being busy doing nothing.",
        "Trust yourself. You know more than you think you do.",
        "Study the past, if you would divine the future.",
        "The day is already blessed, find peace within it.",
        "From error to error one discovers the entire truth.",
        "Well done is better than well said.",
        "Bite off more than you can chew, then chew it.",
        "Work out your own salvation. Do not depend on others.",
        "One today is worth two tomorrows.",
        "Once you choose hope, anythings possible.",
        "God always takes the simplest way.",
        "One fails forward toward success.",
        "From small beginnings come great things.",
        "Learning is a treasure that will follow its owner everywhere",
        "Be as you wish to seem.",
        "The world is always in movement.",
        "Never mistake activity for achievement.",
        "What worries you masters you.",
        "One faces the future with ones past.",
        "Goals are the fuel in the furnace of achievement.",
        "Who sows virtue reaps honour.",
        "Be kind whenever possible. It is always possible.",
        "Talk doesn't cook rice.",
        "He is able who thinks he is able.",
        "A goal without a plan is just a wish.",
        "To succeed, we must first believe that we can."
};
string quote::author[50]{
        "Thomas Edison",
        "Yogi Berra",
        "Abraham Lincoln",
        "Johann Wolfgang von Goethe",
        "Byron Pulsifer",
        "Lao Tzu",
        "Carl Sandburg",
        "Aristotle",
        "Yogi Berra",
        "Margaret Sangster",
        "Buddha",
        "Byron Pulsifer",
        "Iris Murdoch",
        "Karen Clark",
        "Wayne Dyer",
        "",
        "",
        "",
        "Lao Tzu",
        "William Shakespeare",
        "Henry J. Kaiser",
        "Publilius Syrus",
        "Napoleon Hill",
        "Donald Trump",
        "Lao Tzu",
        "Benjamin Spock",
        "Confucius",
        "",
        "Sigmund Freud",
        "Benjamin Franklin",
        "Ella Williams",
        "Buddha",
        "Benjamin Franklin",
        "Christopher Reeve",
        "Albert Einstein",
        "Charles Kettering",
        "",
        "Chinese proverb",
        "Socrates",
        "V. Naipaul",
        "John Wooden",
        "Haddon Robinson",
        "Pearl Buck",
        "Brian Tracy",
        "Leonardo da Vinci",
        "Dalai Lama",
        "Chinese proverb",
        "Buddha",
        "Larry Elder",
        "Michael Korda"
};
//for quiz game
int chance = 0; int correctCount=0, wrongCount=0, grossEarning=0, grossLoss=0, netEarning=0;
class quizGame {
public:
    static int moneyEarned;
    static void startMessage();
    static void earnMoneyDisplayPage();
    static void startQuiz();
    static void justMessage();
    static void summaryOfQuiz();
    static string questions[10];
    static string options[10][4];
    static int correctOption[10];
    static void noChance();
};

int quizGame::moneyEarned;
string quizGame::questions[10] = {
        "Which is the largest lake of Nepal?",
        "How many states are there in the US?",
        "Who teaches us Theory Of Computation?",
        "Which team won Premiere league titles this season?",
        "Who is the president of Nepal?",
        "Which country is hosting Olympics this year?",
        "When was current constitution of Nepal announced?",
        "Who sang the viral song with lyrics: \"now my life's sweet like Cinnamon\"",
        "How many subjects do we have in out 3rd semester?",
        "Which animal laughs like humans?"
};
string quizGame::options[10][4] = {
        {"Rupa",
                "Phewa",
                "Begnas",
                "Rara"},
        {"45",
                "50",
                "55",
                "52"},
        {"Urmila Bhandari",
                "Urbara Bhattrai",
                "Ursala Bhattrai",
                "Urbara Bhandari"},
        {"Real Madrid",
                "Arsenal",
                "Manchester United",
                "Manchester City"},
        {"Ram Chandra Poudel",
                "Bidhya Devi Bhandari",
                "Ram Baran Yadav",
                "None"},
        {"Germany",
                "USA",
                "Japan",
                "France"},
        {"2073",
                "2071",
                "2072",
                "2026"},
        {"Sia",
                "Taylor Swift",
                "Lana Del Rey",
                "Sita Devi"},
        {"5",
                "6",
                "7",
                "8"},
        {"hyena",
                "axolotl",
                "baboon",
                "koala"}
};
int quizGame::correctOption[10] = { 3,
                                    1,
                                    3,
                                    3,
                                    0,
                                    3,
                                    2,
                                    2,
                                    2,
                                    0
};


//functions
void clear();
void startProgram();
string updateTime();
void exitApp();
void viewProfile();

class shop{
public:
    static int sumOfOrder;
    static string items[6]; //list of available items
    static int rates[6] ; //list of rates
    static string quantity[25]; //list of ordered items
    static int number[25]; //number of items ordered
    static int price[25]; //list of ordered rates
    static int choiceItem; //which option user chooses
    static int choiceQty; //how many items user chooses
    static int counter;

    static void welcomeToShop();
    static void order();
    static void bill();
    static void checkOut();
    static void exitShop();
};
string shop::items[6] = {"Fair Jista @ Rs. 180/-",
                         "Rough Jista @ Rs. 100/-",
                         "Highlighter @ Rs. 40/-",
                         "Cricket bal hard @ Rs. 100/-",
                         "UCL 2024 football @ Rs. 800/-",
                         "TT Racket @ Rs. 450/-"};
int shop::rates[6] = {180, 100, 40, 100, 800, 450};
int shop::price[25];
string shop::quantity[25];
int shop::choiceItem;
int shop::choiceQty;
int shop::counter=0;
int shop::number[25];
int shop::sumOfOrder=0;

void increaseCount(){
    shop::counter++;
}

//main method
int main(){
    startProgram();
    return 0;
}

//classes
class welcome_setup{
public:
    static string fullName[2];
    static long long int phoneNumber;
    static int mpin;
    static string strUserName;
    static string userName;
    static string passWord;
public:
    static void takeInformation();
};
string welcome_setup::userName = "";
string welcome_setup::passWord = "";
string welcome_setup::fullName[2];
long long int welcome_setup::phoneNumber;
int welcome_setup::mpin;
string welcome_setup::strUserName;

class login_page:welcome_setup{
private:
    string givenUserName;
    string givenPassword;

public:
    void askToLogin() {
        main_page mainPage;
        cout << "Now let's log in.." << endl;
        cout << "Enter your username: ";
        cin >> login_page::givenUserName;
        cout << "Enter your password: ";
        cin >> givenPassword;
//        cout<< "actual: "<<welcome_setup::userName<<endl;
//        cout<< "given: "<<givenUserName<<endl;
        if(welcome_setup::userName!=givenUserName || welcome_setup::passWord!=givenPassword){
            cout<<"incorrect combination, press 1 to try again, press 2 to create new account.."<<endl;
            int choice;
            cin>>choice;
            if(choice==1){
                clear();
                askToLogin();
            } else{
                clear();
                welcome_setup::takeInformation();
            }
        } else{
            //go to the main welcome page.
            mainPage.display(updateTime());
        }
    }
};

//Functions
void welcome_setup::takeInformation() {
    login_page page;
    cout << "Enter your full name: "<<" "<<endl;
    cin >> fullName[0] >> fullName[1];
    cout << "Enter your phone number: "<<" "<<endl;
    while (true) {
        cin >> phoneNumber;
        if (phoneNumber >= 9700000000 && phoneNumber <= 9899999999) {
            break;
        } else
            cout << "Enter valid phone number: ";
    }
    cout << "Enter username: (Username only contains lower alphabets, numbers and underscores" << endl;
    bool flag = true;
    while (flag) {
        cin >> userName;
        char a[37];
        int x = 48;
        int counter = 0;
        for (int i = 0; i < 37; i++) {
            a[i] = (char) x;
            x++;
            if (i == 9)
                x = 97;
            if (i == 35)
                x = 95;
            strUserName += a[i];
//                cout<<strUserName<<endl;
        }
        char stringArray[userName.length() + 1];
        strcpy(stringArray, userName.c_str());
//            cout<<stringArray<<endl;
        for (int i = 0; i < userName.length(); i++) {
            int y = strUserName.find(stringArray[i]);
            if (y >= 0 && y < 37) {
//                    cout<<"valid!!"<<endl;
                counter++;
            } else {
                cout << "invalid!! try again!!" << endl;
                break;
            }
            if (counter == userName.length()) {
                flag = false;
            }
        }
    }
    cout << "Create a password. Password must be between 8 greater than 8 characters, no space allowed: " << endl;
    while (true) {
        cin >> passWord;
        if (passWord.length() < 8) {
            cout << "Password must have 8 or more than 8 characters, try again: " << endl;
        } else
            break;
    }
    cout << "Now let's create MPIN for transactions!  MPIN must be 4 digits, only numbers allowed: " << endl;
    while (true) {
        cin >> mpin;
        if ((mpin / 1000) > 9 || (mpin / 1000) < 1) {
            cout << "MPIN must be 4 digits, only numbers allowed, try again: " << endl;
        } else
            break;
    }
    cout<<string(100, '-')<<endl;
    cout<<"Please note down these credentials. Once you forget them, you can't "
        <<endl<<"complete transactions, or enjoy full application experience"<<endl;
    cout << "Account successfully created! Log in on the next page using those credentials." << endl;
    cout << "Press any key to continue" << endl;
    char c;
    cin >> c;
    clear();
    page.askToLogin();

}

void main_page::display(string dayTime) {
    clear();

    dayTime = updateTime();
    cout<<string(100,'-')<<endl;
    cout<<string(35, '~')<<" Welcome to Sunil Bank Limited "<<string(34, '~')<<endl;
    cout<<string(36, ' ')<<"Pokhara-19, Puranchaur, Kaski"<<string(35, ' ')<<endl;
    cout<<endl;
//    cout<<"Welcome! "<<"Sunil Poudel"<<string(55, ' ')<<dayTime.substr(0, 11)<<endl;
    cout<<"Welcome! "<<welcome_setup::fullName[0]<<" "<<welcome_setup::fullName[1]<<string(55, ' ')<<dayTime<<endl;
    cout<<"Account no.: "<<"XXX-XXXX-XXXX-X304"<<string(45, ' ')<<"Your balance: Rs. "<<quizGame::moneyEarned<<endl;

    cout<<string(100, '~')<<endl;
    cout<<"Menu (enter options inside bracket for action) : "<<endl;
    cout<<"(1) View your profile."<<endl;
    cout<<"(2) Earn money."<<endl;
    cout<<"(3) Online shopping."<<endl;
    cout<<"(4) Update Quote of the Day."<<endl;
    cout<<"(5) Update date and time."<<endl;
    cout<<"(6) Exit the app."<<endl;
    cout<<string(100, '-')<<endl;
    cout<<"Quote of the day: "<<endl;
    cout<<myQuote;
    cout<<string(100, '-')<<endl;
    cout<<"Enter option here: ";
    int choice=0;
    cin>>choice;
    switch (choice) {
        case 1:
            viewProfile();
            break;
        case 2:
            quizGame::startMessage();
            break;
        case 3:
            shop::welcomeToShop();
            break;
        case 4:
            quote::updateQuote();
            display(updateTime());
            break;
        case 5:
//          dayTime = updateTime();
            display(updateTime());
            break;
        case 6:
            exitApp();
            break;

    }

}
//extra functions
void clear(){
    cout<<string(50, '\n');
}
string updateTime() {
//    clear();
    time_t currentDt = time(0);
    string dayTime = ctime(&currentDt);
    return dayTime;
}
void viewProfile(){
    clear();
    cout<<string(25, ' ')<<"Your profile"<<string(25, ' ')<<endl;
    cout<<"Name: "<<welcome_setup::fullName[0]<<" "<<welcome_setup::fullName[1]<<endl;
    cout<<"Phone number: "<<welcome_setup::phoneNumber<<endl;
    cout<<"User name: "<<welcome_setup::userName<<endl;
    cout<<"Password: "<<"**********"<<endl;
    cout<<"MPIN: "<<"XXXX"<<endl;
    cout<<"press any key to continue... ";
    char c;
    cin>>c;
    main_page::display(updateTime());

}

void startProgram(){
    welcome_setup welcome; login_page login;
    welcome.takeInformation();
}
void exitApp(){
    cout<<"exitting..."<<endl;-+
}
void quizGame::startMessage() {
    clear();
    cout<<string(100, '~')<<endl;
    cout<<string(38, '-')<<" Welcome to Money Bank! "<<string(38, '-')<<endl;
    cout<<endl;
    cout<<"Here, you can earn money by playing quiz game! "<<endl;
    cout<<"Press 1 to start playing quiz... 0 to go to previous page...";
    int choice;
    cin>>choice;
    if(choice==1){
        earnMoneyDisplayPage();
    } else{
        main_page::display(updateTime());
    }
}
void quizGame::earnMoneyDisplayPage(){
    char key;
    justMessage();
    cout<<"press any key to continue: ";
    cin>>key;
    startQuiz();

}
void quizGame::startQuiz(){
    if(moneyEarned!=0) {
        quizGame::noChance();
    }
    else if(moneyEarned==0) {
        cout<<"quiz has started..."<<endl;
        int option;
        cout<<string(100, '-')<<endl;
        cout<<string(100, '-')<<endl;
        for (int i = 0; i < 10; i++) {
            cout << "Q. " << i + 1 << ". " << quizGame::questions[i] << endl;
            cout << endl;
            cout << "1. " << setw(50) << left << options[i][0] << setw(100) << left << "2. " + options[i][1] << endl;
            cout << "3. " << setw(50) << left << options[i][2] << setw(100) << left << "4. " + options[i][3] << endl;
            cout << endl;
            cout << "Enter option... " << endl;
            cin >> option;
            if (option-1 == (quizGame::correctOption[i])) {
                cout << "Wow! correct answer! You received Rs. 50!" << endl;
                correctCount++;
                grossEarning+=50;
                moneyEarned += 50;
            } else {
                cout << "Opps! You have entered incorrect option! You lost Rs. 10!" << endl;
                cout<<"The correct answer is: "<<correctOption[i]+1<<". "<<options[i][correctOption[i]]<<endl;
                wrongCount++;
                grossLoss-=10;
                moneyEarned -= 10;
            };
            char c;
            cout << "Enter any key to continue... ";
            cin >> c;
            cout<<string(100, '~')<<endl;
            if(i==9){
                cout<<"You have reached end of the quiz. Press any key to see summary.. "<<endl;
                char d;
                cin>>d;
                summaryOfQuiz();
            }
            justMessage();
        }
    }
}
void quizGame::justMessage() {
    clear();
    char c;
    cout<<string(100, '~')<<endl;
    cout<<string(38, '-')<<" Welcome to Money Bank! "<<string(38, '-')<<endl;
    cout<<endl;
    cout<<string(26, ' ')<<" Thanks for giving your time in playing the quiz!  "<<string(25, ' ')<<endl;
    cout<<string(23, ' ')<<" This is just one time offer, so please take your time!  "<<string(22, ' ')<<endl;
    cout<<"You will earn Rs. 50 for each correct answer but lose Rs. 10 for each wrong answer!"<<endl;
    cout<<"Your earning now: "<<"Rs. "<<moneyEarned;
    cout<<endl;
    cout<<string(100, '~')<<endl;

}

void quizGame::summaryOfQuiz() {
    clear();
    char c;
    cout<<string(100, '-');
    cout<<string(100, '~');
    cout<<endl;
    cout<<"Your quiz summary: "<<endl;
    cout<<"Questions correct: "<<correctCount<<endl;
    cout<<"Questions wrong: "<<wrongCount<<endl;
    cout<<"Your gross earning: "<<grossEarning<<endl;
    cout<<"Your gross loss: "<<grossLoss<<endl;
    cout<<string(100, '-')<<endl;
    cout<<"Your net earning: "<<moneyEarned<<endl;
    cout<<string(100, '~')<<endl;
    cout<<string(100, '-')<<endl;

    cout<<"Enter any key to see the surprise from Sunil!!! ";
    cin>>c;
    clear();
    cout<<"Surprise!! You have received Rs. 2000 as a generous gift from Sunil"<<endl<<"as a \'thank you\' for running this program!!"<<endl;
    moneyEarned+=2000;
    cout<<"Enter any key to continue!!! ";
    cin>>c;
    main_page::display(updateTime());

}

void quizGame::noChance(){
    clear();
    char c;
    cout<<"Sorry, you have already earned through the quiz game!!!"<<endl;
    cout<<"That was just a one-time offer!!"<<endl;
    cout<<"Have a nice day!!!"<<endl;
    cout<<endl;
    cout<<string(100, '-')<<endl;
    cout<<string(100, '~')<<endl;
    cout<<"Press any key to continue: ";
    cin>>c;
    main_page::display(updateTime());
}

void shop::welcomeToShop(){
    clear();
//    cout<<string(50, '~')<<endl;
    cout<<string(12, '~')<<"Sunil Stationery and Sports"<<string(11, '~')<<endl;
    cout<<"Full stationery solutios!"<<endl;
    cout<<"1. Fair Jista @ Rs. 180/-"<<endl;
    cout<<"2. Rough Jista @ Rs. 100/-"<<endl;
    cout<<"3. Highlighter @ Rs. 40/-"<<endl;
    cout<<"4. Cricket bal hard @ Rs. 100/-"<<endl;
    cout<<"5. UCL 2024 football @ Rs. 800/-"<<endl;
    cout<<"6. TT Racket @ Rs. 450/-"<<endl;
    cout<<string(50, '~')<<endl;
//    cout<<string(50, '~')<<endl;
    cout<<"Press 0 to exit the shop and go to the main page."<<endl;
    cout<<"Press 1 to start shopping."<<endl;
    cout<<string(50, '~')<<endl;

    cout<<"Enter your choice here: ";
    int choice;
    cin>>choice;
    if(choice==0){
        main_page::display(updateTime());
    } else{
        order();
    }


};
void shop::order() {
    cout << string(50, '-') << endl;
    int choice;
    cout << "Enter item number from list: ";
    cin >> choiceItem;
    quantity[counter] = items[choiceItem-1];
    cout<<"How many? ";
    cin >> number[counter];
    price[counter] = rates[choiceItem-1];
    counter++;
    cout<<string(50, '-')<<endl;
    cout<<"press 1 to order more, press 2 to make bill.. "<<endl;
    cin>>choice;
    if(choice==1){
        order();
    } else
        bill();
}

void shop::bill() {
    clear();
    cout<<"Your order summary:"<<endl;
    cout<<string(100, '-')<<endl;
    cout<<setw(50)<<left<<"Item"<<setw(10)<<left<<"Quantity"<<setw(10)<<left<<"Rate"<<setw(10)<<left<<"Amount"<<endl;
    for(int i=0; i<counter; i++){
        cout<<setw(50)<<left<<quantity[i]<<setw(10)<<left<<number[i]<<setw(10)<<left<<price[i]<<setw(10)<<left<<number[i]*price[i]<<endl;
        sumOfOrder+=number[i]*price[i];
    }
    cout<<setw(50)<<left<<"Total"<<setw(10)<<left<<" "<<setw(10)<<left<<" "<<setw(10)<<left<<sumOfOrder<<endl;
    cout<<string(100, '-')<<endl;
    cout<<"proceed to checkout? press: 1 to proceed, 0 to cancel and return to shop: "<<endl;
    int choice;
    cin>>choice;
    if(choice==0){
        counter=0;
        sumOfOrder=0;
        clear();
        welcomeToShop();
    } else{
        checkOut();
    }
}
void shop::checkOut() {
    clear();
    cout << "Enter your MPIN: " << endl;
    int mpin;
    cin >> mpin;
    if(mpin==welcome_setup::mpin){
        cout << "Payment successful! " << endl;
        cout << "You have made payment of " << sumOfOrder << ". Balance has been deducted from your account!" << endl;
        cout<<"Thank you for shopping! See you soon!"<<endl;
        cout<<string(100, '-')<<endl;
        quizGame::moneyEarned -= sumOfOrder;
        cout<<"Press any key to continue... "<<endl;
        char c;
        cin>>c;
        main_page::display(updateTime());
    } else {
        cout << "Payment was not successful!" << endl;
        cout << "Press 0 to enter mpin again.. press 1 to cancel transaction and return back to home page" << endl;
        int tempChoice;
        cin >> tempChoice;
        if (tempChoice == 0) {
            checkOut();
        } else {
            main_page::display(updateTime());
        }
    }
}
