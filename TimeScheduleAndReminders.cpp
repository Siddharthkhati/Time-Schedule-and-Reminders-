#include <iostream>
#include <string.h>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <conio.h>
using namespace std;
class log_in
{
public:
    char uw[100], pw[100], ex;
    int choice;

public:
    void login();
    void list();
    void exitprog();
};

void log_in::login()
{
    for (int i = 0; i < 10; i++)
    {
        cout << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter username: ";
    cin >> uw;
    cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter password: ";
    cin >> pw;
    cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------" << endl;
}

void log_in::list()
{
    cout << "ALL LISTS" << endl
         << endl;
    cout << "1. Default List" << endl;
    cout << "2. Personal List" << endl;
    cout << "3. Shopping List" << endl;
    cout << "4. Wishlist List" << endl;
    cout << "5. Work List" << endl;
    cout << "6. Exit" << endl;
    cout << "----------------------------" << endl
         << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl
         << endl;
}
void log_in::exitprog()
{
    while (1)
    {
        system("cls");
        cout << "\n Are you sure, you want to exit?(y | n) \n";
        char ex;
        cin >> ex;
        if (ex == 'y' || ex == 'Y')
            exit(0);
        else if (ex == 'n' || ex == 'N')
        {
            break;
        }
        else
        {
            cout << "\n Invalid choice !!!";
            getchar();
        }
    }
}

class Stime
{
public:
    string str1 = "AM", str2 = "PM", a;
    int temp1, temp2, temp3, temp4;

public:
    void strtime(int *, int *);
    void endtime(int *, int *);
};

void Stime::strtime(int *x, int *y)
{
    if (*x >= 0 && *x <= 24)
    {
        if (*y >= 0 && *y <= 60)
        {
            if (*x >= 12 && *x <= 24)
            {
                cout << "\t\t\t\t\t\t\t\t\t\tStart Time: ";
                cout << *x;
                cout << ":";
                cout << *y;
                cout << str2 << endl;
            }
            else
            {
                cout << "\t\t\t\t\t\t\t\t\t\tStart Time: ";
                cout << *x;
                cout << ":";
                cout << *y;
                cout << str1 << endl;
            }
        }
        else
        { 
            a = "wrong input";
            cout << "\t\t\t\t\t\t\t\t\t\twrong input." << endl;            
        }
    }
    else
    {
        a = "wrong input";
        cout << "\t\t\t\t\t\t\t\t\t\txxxxxxx wrong input. xxxxxxx" << endl;  
    }
    cout << endl;
    temp1 = *x;
    temp2 = *y;
};

void Stime::endtime(int *p, int *q)
{
    if (*p >= 0 && *p <= 24)
    {
        if (*q >= 0 && *q <= 60)
        {
            if (*p >= 12 && *p <= 24)
            {

                cout << "\t\t\t\t\t\t\t\t\t\tEnd Time: ";
                cout << *p;
                cout << ":";
                cout << *q;
                cout << str2 << endl;
            }
            else
            {
                cout << "\t\t\t\t\t\t\t\t\t\tEnd Time: ";
                cout << *p;
                cout << ":";
                cout << *q;
                cout << str1 << endl;
            }
        }
        else
        {  
            a = "wrong input";
            cout << "\t\t\t\t\t\t\t\t\t\twrong input." << endl;
            
        }
    }
    else
    {
        a = "wrong input";
        cout << "\t\t\t\t\t\t\t\t\t\txxxxxxx wrong input. xxxxxxx" << endl;
    }
    temp3 = *p;
    temp4 = *q;
}

class Calendar
{
public:
    int getNumberOfDays(int month, int year);
    void printCalendar(const char **weekDays, int firstWeekDayOfMonth, int numberOfDays, int remiderDay);
    void delay();
    void delay1();
    void delay2();
    void delay3();
    void delay4();
    void delay5();
};

// function will return total number of days
int Calendar::getNumberOfDays(int month, int year)
{
    // leap year condition, if month is 2
    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            return 29;
        else
            return 28;
    }
    // months which has 31 days
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else
        return 30;
}

void Calendar::printCalendar(const char **weekDays, int firstWeekDayOfMonth, int numberOfDays, int remiderDay)
{
    int w, d;
    for (w = 0; w < 7; w++)
    {
        cout << weekDays[w] << "    ";
    }
    cout << "\n-------------------------------------------------\n";
    cout << "\n";
    int tempBreak = 1;

    for (w = 0; w < firstWeekDayOfMonth; w++)
    {
        cout << "       ";
        tempBreak++;
    }
    for (d = 1; d <= numberOfDays; d++)
    {
        if (d == remiderDay)
        {
            cout << "*" << d << "*"
                 << "   ";
        }
        else
        {
            cout << d << "     ";
        }

        if (d < 10)
            cout << " ";
        if (tempBreak >= 7)
        {
            cout << "\n";
            tempBreak = 0;
        }
        tempBreak++;
    }
}

void Calendar::delay()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\tSaving Records ...";
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }

    cout << "\n\t\t\t\t\t\t\t\t\t\tTime for Reminders...";
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

void Calendar::delay1()
{
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

void Calendar::delay2()
{
    cout << "\n Exiting Now ...";
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

void Calendar::delay3()
{
    cout << "\n Logging Out ...";
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

void Calendar::delay4()
{
    cout << "\n Signing Out ...";
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

void Calendar::delay5()
{
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t Logging In ...";
    for (int i = 0; i < 3; i++)
    {
        for (int ii = 0; ii < 20000; ii++)
        {
            for (int iii = 0; iii < 20000; iii++)
            {
            }
        }
    }
}

int main()
{
    Stime st;
    Calendar cal;
    char sc[100], rdMessage[100];
    string wi = "wrong input";
    const char *list_a[5] = {"Default List", "Personal List", "Shoping List", "Wishlist List", "Work List"};
    int date = 0, hh1, min1, hh2, min2, mnNum;
    
    char n[100], p[100];
    ofstream file;
    ofstream file2;
    while (1)
    {
        system("cls");
        cout << endl << endl << "\t\t\t\t\t\t\t\t\t\t\t1. Login" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t2. Sign up" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t3. Exit" << endl;
        char choice;
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter your Choice: ";
        cin >> choice;
        if (choice == '1')
        {

            while (true)
            {
                cout << endl
                     << "\t\t\t\t\t\t\t\t\t\t--------------------------------------------";
                cout << endl
                     << "\t\t\t\t\t\t\t\t\t\t\tenter your name: ";
                cin >> n;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter the password: ";
                cin >> p;
                cout << "\t\t\t\t\t\t\t\t\t\t--------------------------------------------";
                cal.delay5();
                ifstream file3(n);
                file2.open(n, ios::app);
                strcat(n, p);
                ifstream file1(n);

                if (!file1)
                {
                    cout << "invalid username or password" << endl;
                }
                else
                {
                    system("cls");
                    char ch;
                    while (file3.eof() == 0)
                    {
                        file3.get(ch);
                        cout << ch;
                    }
                    cout << "Enter any key to Continue...";
                    getch();
                    while (1)
                    {
                        system("cls");
                        int che;
                        cout << "1. Add your Schedule" << endl;
                        cout << "2. Logout" << endl;
                        cout << "Enter your Choice: ";
                        cin >> che;
                        system("cls");
                        if (che == 1)
                        {
                            log_in lg;

                            /*file2.open(lg.uw, ios::app);
                            strcat(lg.uw, lg.pw);*/
                            system("cls");
                            cout << endl
                                 << "\t\t\t\t\t\t--------------------------------Time Schedule and  Reminder--------------------------------" << endl
                                 << endl;
                            file.open(n, ios::app);
                            while (true)
                            {
                                lg.list();
                                if (lg.choice == 1 || lg.choice == 2 || lg.choice == 3 || lg.choice == 4 || lg.choice == 5)
                                {

                                    system("cls");
                                    cout << "\t\t\t\t\t\t\t\t\t\t\t" << list_a[lg.choice - 1] << endl;
                                    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------" << endl
                                         << endl;
                                    cout << "\t\t\t\t\t\t\t\t\t\tAdd Title: ";
                                    cin >> sc;
                                    cout << "\t\t\t\t\t\t\t\t\t  --------------------------------------" << endl;
                                    while (true)
                                    {
                                        cout << "\t\t\t\t\t\t\t\t\t\tStarting Time:(hours:minutes)" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\tEnter hours: ";
                                        cin >> hh1;
                                        cout << "\t\t\t\t\t\t\t\t\t\tEnter minutes: ";
                                        cin >> min1;
                                        st.strtime(&hh1, &min1);
                                        if (st.a != wi)
                                        {
                                            break;
                                        }
                                    }
                                    while (true)
                                    {
                                        cout << "\t\t\t\t\t\t\t\t\t\tEnding Time:(hours:minutes)" << endl;
                                        cout << "\t\t\t\t\t\t\t\t\t\tEnter hours: ";
                                        cin >> hh2;
                                        cout << "\t\t\t\t\t\t\t\t\t\tEnter minutes: ";
                                        cin >> min2;
                                        st.endtime(&hh2, &min2);
                                        if (st.a != wi)
                                        {
                                            cout << "\t\t\t\t\t\t\t\t\t  --------------------------------------" << endl;
                                            break;
                                        }
                                    }
                                    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------" << endl
                                         << endl;
                                    cal.delay();
                                    while (1)
                                    {
                                        system("cls");
                                        cout << "Any Reminders?(y | n) \n";
                                        char re;
                                        cin >> re;
                                        system("cls");
                                        if (re == 'y' || re == 'Y')
                                        {
                                            int i, w, d, n, j, c = 1;
                                            const char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
                                            const char *weekDays[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

                                            time_t t = time(0); // get time now
                                            struct tm *now = localtime(&t);
                                            int currentDay = now->tm_mday;
                                            int weekDay = now->tm_wday;
                                            int currentYear = now->tm_year;
                                            int currentmonth = now->tm_mon;
                                            int numberOfDays = cal.getNumberOfDays(now->tm_mon + 1, now->tm_year);

                                            tm tFirst = {0, 0, 0, 1, currentmonth, currentYear};
                                            time_t time_temp = mktime(&tFirst);
                                            struct tm *firstTime = localtime(&time_temp);

                                            int firstWeekDayOfMonth = firstTime->tm_wday;

                                            cout << "Current Date: " << firstTime->tm_mday << "-" << months[firstTime->tm_mon] << "-" << firstTime->tm_year + 1900 << "\n\n";
                                            cout << months[currentmonth] << "-" << currentYear + 1900 << "\n\n";

                                            cal.printCalendar(weekDays, firstWeekDayOfMonth, numberOfDays, 0);

                                            cout << "\n";
                                            cout << "Press enter key to add reminder\n";
                                            getch();

                                            int dayReminder;
                                            char remiderMessage[100];

                                            cout << "Enter reminder day: ";
                                            cin >> dayReminder;
                                            cout << "Enter reminder message:";
                                            cin >> remiderMessage;

                                            cout << "\n\n";

                                            cal.printCalendar(weekDays, firstWeekDayOfMonth, numberOfDays, dayReminder);

                                            cout << "\n==================Reminder=====================\n";
                                            cout << "Reminder day:" << dayReminder;
                                            cout << "\n"
                                                 << remiderMessage;

                                            time_t tim = time(NULL);
                                            tm *timePtr = localtime(&tim);
                                            cout << endl;
                                            cout << "Adding Reminder to your list ..." << endl;
                                            cal.delay1();
                                            while (1)
                                            {
                                                system("cls");
                                                cout << "1. Invite people" << endl;
                                                cout << "2. Next" << endl;
                                                cout << "Your Choice: ";
                                                int ch;
                                                cin >> ch;
                                                if (ch == 1)
                                                {
                                                    system("cls");
                                                    char user_name[100];
                                                    cout << "Enter the username of the person: ";
                                                    cin >> user_name;
                                                    ifstream fname(user_name);

                                                    if (!fname)
                                                    {
                                                        cout << "--------------invalid username: --------------" << endl;
                                                        cal.delay1();
                                                        system("cls");
                                                        continue;
                                                    }

                                                    else
                                                    {
                                                        ofstream fname;
                                                        fname.open(user_name, ios::app);
                                                        fname << "----------------------------------------------------------------------------" << endl;
                                                        fname << "\t\t" << list_a[lg.choice - 1] << "\t" << dayReminder << ", " << currentYear + 1900 << endl;
                                                        fname << sc << endl;
                                                        fname << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                                                              << endl;
                                                        fname << "\t-------" << remiderMessage << " :)"
                                                              << "-------" << endl;
                                                        fname << "----------------------------------------------------------------------------" << endl;
                                                        fname.close();
                                                    }
                                                }

                                                else if (ch == 2)
                                                {
                                                    date = dayReminder;
                                                    mnNum = currentYear;
                                                    strcpy(rdMessage, remiderMessage);
                                                    break;
                                                }
                                                else
                                                {
                                                    cout << "\n Invalid choice !!!";
                                                    getchar();
                                                }
                                            }

                                            break;
                                        }
                                        else if (re == 'n' || re == 'N')
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            cout << "\n Invalid choice !!!";
                                            getchar();
                                        }
                                    }
                                    
                                    
                                    if (date == 0)
                                    {
                                        file << "----------------------------------------------------------------------------" << endl;
                                        file << "\t\t" << list_a[lg.choice - 1] << endl;
                                        file << sc << endl;
                                        file << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl;
                                        file << "----------------------------------------------------------------------------" << endl;
                                        file.close();
                                        cout << endl
                                             << "\t\t\t\t\t\tXXXXXXXXXX Your schedule is being added(Please wait). XXXXXXXXXX" << endl;
                                        cal.delay1();
                                    }

                                    else
                                    {
                                        // file
                                        file << "----------------------------------------------------------------------------" << endl;
                                        file << "\t\t" << list_a[lg.choice - 1] << "\t" << date << ", " << mnNum + 1900 << endl;
                                        file << sc << endl;
                                        file << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                                             << endl;
                                        file << "\t-------" << rdMessage << " :)"
                                             << "-------" << endl;
                                        file << "----------------------------------------------------------------------------" << endl;
                                        // file2

                                        file2 << "----------------------------------------------------------------------------" << endl;
                                        file2 << "\t\t" << list_a[lg.choice - 1] << "\t" << date << ", " << mnNum + 1900 << endl;
                                        file2 << sc << endl;
                                        file2 << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                                              << endl;
                                        file2 << "\t-------" << rdMessage << " :)"
                                              << "-------" << endl;
                                        file2 << "----------------------------------------------------------------------------" << endl;
                                        /*file.close();
                                        file2.close();*/
                                        cout << endl
                                             << "\t\t\t\t\t\tXXXXXXXXXX Your schedule is being added(Please wait). XXXXXXXXXX" << endl;
                                        cal.delay1();
                                    }
                                    system("cls");
                                }

                                else if (lg.choice == 6)
                                {
                                    while (1)
                                    {
                                        system("cls");
                                        cout << "\n Are you sure, you want to exit?(y | n) \n";
                                        char ex;
                                        cin >> ex;
                                        if (ex == 'y' || ex == 'Y')
                                        {
                                            file.close();
                                            file2.close();
                                            system("cls");
                                            cal.delay3();
                                            return 0;
                                        }

                                        else if (ex == 'n' || ex == 'N')
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            cout << "\n Invalid choice !!!";
                                            getchar();
                                        }
                                    }
                                    break;
                                }
                            }
                        }
                        else if (che == 2)
                        {
                            file.close();
                            file2.close();
                            cal.delay3();
                            return 0;
                        }
                    }
                }
            }
        }
        else if (choice == '2')
        {
            log_in lg;
            system("cls");
            lg.login();
            cout << "\t\t\t\t\t\t\t\t\t\t\tSigning In (Please wait) ..." << endl;
            cal.delay1();
            file2.open(lg.uw, ios::app);
            strcat(lg.uw, lg.pw);
            system("cls");
            cout << endl
                 << "\t\t\t\t\t\t--------------------------------Time Schedule and  Reminder--------------------------------" << endl
                 << endl;
            file.open(lg.uw, ios::app);
            while (true)
            {
                lg.list();
                if (lg.choice == 1 || lg.choice == 2 || lg.choice == 3 || lg.choice == 4 || lg.choice == 5)
                {
                    system("cls");
                    cout << "\t\t\t\t\t\t\t\t\t\t\t" << list_a[lg.choice - 1] << endl;
                    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------" << endl
                         << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\tAdd Title: ";
                    cin >> sc;
                    cout << "\t\t\t\t\t\t\t\t\t  --------------------------------------" << endl;
                    while (true)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\tStarting Time:(hours:minutes)" << endl;
                        cout << "\t\t\t\t\t\t\t\t\t\tEnter hours: ";
                        cin >> hh1;
                        cout << "\t\t\t\t\t\t\t\t\t\tEnter minutes: ";
                        cin >> min1;
                        st.strtime(&hh1, &min1);
                        if (st.a != wi)
                        {
                            break;
                        }
                    }
                    while (true)
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\tEnding Time:(hours:minutes)" << endl;
                        cout << "\t\t\t\t\t\t\t\t\t\tEnter hours: ";
                        cin >> hh2;
                        cout << "\t\t\t\t\t\t\t\t\t\tEnter minutes: ";
                        cin >> min2;
                        st.endtime(&hh2, &min2);
                        if (st.a != wi)
                        {
                            cout << "\t\t\t\t\t\t\t\t\t  --------------------------------------" << endl;
                            break;
                        }
                    }
                    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------------" << endl
                         << endl;
                    cal.delay();
                    while (1)
                    {
                        system("cls");
                        cout << "Any Reminders?(y | n) \n";
                        char re;
                        cin >> re;
                        system("cls");
                        if (re == 'y' || re == 'Y')
                        {
                            int i, w, d, n, j, c = 1;
                            const char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
                            const char *weekDays[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

                            time_t t = time(0); // get time now
                            struct tm *now = localtime(&t);
                            int currentDay = now->tm_mday;
                            int weekDay = now->tm_wday;
                            int currentYear = now->tm_year;
                            int currentmonth = now->tm_mon;
                            int numberOfDays = cal.getNumberOfDays(now->tm_mon + 1, now->tm_year);

                            tm tFirst = {0, 0, 0, 1, currentmonth, currentYear};
                            time_t time_temp = mktime(&tFirst);
                            struct tm *firstTime = localtime(&time_temp);

                            int firstWeekDayOfMonth = firstTime->tm_wday;

                            cout << "Current Date: " << firstTime->tm_mday << "-" << months[firstTime->tm_mon] << "-" << firstTime->tm_year + 1900 << "\n\n";
                            cout << months[currentmonth] << "-" << currentYear + 1900 << "\n\n";

                            cal.printCalendar(weekDays, firstWeekDayOfMonth, numberOfDays, 0);

                            cout << "\n";
                            cout << "Press enter key to add reminder\n";
                            getch();

                            int dayReminder;
                            char remiderMessage[100];

                            cout << "Enter reminder day: ";
                            cin >> dayReminder;
                            cout << "Enter reminder message: ";
                            cin >> remiderMessage;

                            cout << "\n\n";

                            cal.printCalendar(weekDays, firstWeekDayOfMonth, numberOfDays, dayReminder);

                            cout << "\n==================Reminder=====================\n";
                            cout << "Reminder day:" << dayReminder;
                            cout << "\n"
                                 << remiderMessage;

                            time_t tim = time(NULL);
                            tm *timePtr = localtime(&tim);
                            cout << endl;
                            cout << "Adding Reminder to your list ..." << endl;
                            cal.delay1();
                            while (1)
                            {
                                system("cls");
                                cout << "1. Invite people" << endl;
                                cout << "2. Next" << endl;
                                cout << "Your Choice: ";
                                int ch;
                                cin >> ch;
                                if (ch == 1)
                                {
                                    system("cls");
                                    char user_name[100];
                                    cout << "Enter the username of the person:) : ";
                                    cin >> user_name;
                                    ifstream fname(user_name);

                                    if (!fname)
                                    {
                                        continue;
                                    }

                                    else
                                    {
                                        ofstream fname;
                                        fname.open(user_name, ios::app);
                                        fname << "----------------------------------------------------------------------------" << endl;
                                        fname << "\t\t" << list_a[lg.choice - 1] << "\t" << dayReminder << ", " << currentYear + 1900 << endl;
                                        fname << sc << endl;
                                        fname << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                                              << endl;
                                        fname << "\t-------" << remiderMessage << " :)"
                                              << "-------" << endl;
                                        fname << "----------------------------------------------------------------------------" << endl;
                                        fname.close();
                                    }
                                }

                                else if (ch == 2)
                                {
                                    date = dayReminder;
                                    mnNum = currentYear;
                                    strcpy(rdMessage, remiderMessage);
                                    break;
                                }
                                else
                                {
                                    cout << "\n Invalid choice !!!";
                                    getchar();
                                }
                            }

                            break;
                        }
                        else if (re == 'n' || re == 'N')
                        {
                            break;
                        }
                        else
                        {
                            cout << "\n Invalid choice !!!";
                            getchar();
                        }
                    }

                    if (date == 0)
                    {
                        file << "----------------------------------------------------------------------------" << endl;
                        file << "\t\t" << list_a[lg.choice - 1] << endl;
                        file << sc << endl;
                        file << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl;
                        file << "----------------------------------------------------------------------------" << endl;
                        file.close();
                        cout << endl
                             << "\t\t\t\t\t\tXXXXXXXXXX Your schedule is being added(Please wait). XXXXXXXXXX" << endl;
                        cal.delay1();
                    }

                    else
                    {
                        // file
                        file << "----------------------------------------------------------------------------" << endl;
                        file << "\t\t" << list_a[lg.choice - 1] << "\t" << date << ", " << mnNum + 1900 << endl;
                        file << sc << endl;
                        file << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                             << endl;
                        file << "\t-------" << rdMessage << " :)"
                             << "-------" << endl;
                        file << "----------------------------------------------------------------------------" << endl;
                        // file2

                        file2 << "----------------------------------------------------------------------------" << endl;
                        file2 << "\t\t" << list_a[lg.choice - 1] << "\t" << date << ", " << mnNum + 1900 << endl;
                        file2 << sc << endl;
                        file2 << st.temp1 << ":" << st.temp2 << " - " << st.temp3 << ":" << st.temp4 << endl
                              << endl;
                        file2 << "\t-------" << rdMessage << " :)"
                              << "-------" << endl;
                        file2 << "----------------------------------------------------------------------------" << endl;
                        /*file.close();
                        file2.close();*/
                        cout << endl
                             << "\t\t\t\t\t\tXXXXXXXXXX Your schedule is being added(Please wait). XXXXXXXXXX" << endl;
                        cal.delay1();
                    }
                    system("cls");
                }

                else if (lg.choice == 6)
                {
                    while (1)
                    {
                        system("cls");
                        cout << "\n Are you sure, you want to Sign Out?(y | n) \n";
                        char ex;
                        cin >> ex;
                        if (ex == 'y' || ex == 'Y')
                        {
                            file.close();
                            file2.close();
                            system("cls");
                            cal.delay4();
                            return 0;
                        }

                        else if (ex == 'n' || ex == 'N')
                        {
                            system("cls");
                            break;
                        }
                        else
                        {
                            cout << "\n Invalid choice !!!";
                            getchar();
                        }
                    }
                }
            }
        }
        else if (choice == '3')
        {
            system("cls");
            cal.delay2();
            return 0;
        }
        else
        {
            getchar();
        }
    }
}
