#include <iostream>
using namespace std;
#include <cstring>


class Time
{
      public:
             void display ();
             void printUniversal ();
             void printStandard();
             int setHour (int );
             void setMinute (int );

             void setSecond (int );
             int getHour();
             int getMinute();
             int getSecond();

            Time ();
            Time (int,int);
            Time (int,int,int);

            Time operator +(Time &date2);



            ~Time();

      private:
               int hour;
              int minute;
               int second;
};

               Time::Time()
               {
                hour = 0;
                minute = 0;
                second = 0;

                }



                Time::Time ( int hour1 , int minute1)
                {
                hour = hour1;
                minute = minute1;
                second = 0;

                }


                Time::Time ( int hour2, int minute2,int second2)
                {
                hour = hour2;
                minute = minute2;
                second = second2;

                }

                Time::~Time()
                {

                }

      void Time::display()
      {
           cout << "\nThe time is: " << hour <<":"<< minute << ":" << second <<endl<< endl;
           }

           int Time::setHour (int h)
           {
                if ( h>=0 && h<24)
                hour = h;
                else
                hour = 1;

                }



           void Time::setMinute (int m)
           {
                if ( m>= 0 && m<=60)
                minute= m;
                else
                minute = 1;
                }


           void Time::setSecond (int s)
           {
                 if( s>= 0 && s <60)
                second = s;
                else
                second = 1;

                }



           int Time::getHour()
           {
                cout << "enter hour:";
                  cin >> hour;

               }


           int Time::getMinute()
           {
                cout << "enter minute:";
                cin >> minute;

               }



           int Time::getSecond()
           {
              cout <<"enter second:";
              cin >> second;

               }

           Time Time :: operator +(Time &t)
           {
                Time tmp;
                tmp.hour = hour + t.hour;
                tmp.minute = minute + t.minute;
                tmp.second  = second + t.second;
                return tmp;
                }

 int main ()
 {
     Time time1;
     Time time2;
     Time time3;

     time1.getHour();
     time1.getMinute();
     time1.getSecond();
     time2.getHour();
     time2.getMinute();
     time2.getSecond ();

     time1.display ();
     time2.display ();
     time3 = time1 + time2;
     time3.display();


     return 0;
}
