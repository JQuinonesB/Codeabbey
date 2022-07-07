#include <iostream>
#include <iostream>
#include <ctime>
#include <list>

#define ORDERS 1000

using namespace std;

list<int> orders_list;

void populate_list();
void save_list(list<int>::iterator pos, int orders_processed=0);

int main()
{
   int ord_proc = 0;
   list<int>::iterator list_iter;
   populate_list();
   time_t start_time = time(0);
   time_t end_time, delay;
   char* dt = ctime(&start_time);
   cout << dt << endl;

   list_iter = orders_list.begin();
   save_list(list_iter, ord_proc);
   end_time = time(0);
   delay = end_time - start_time;
   dt = ctime(&end_time);
   cout << dt << endl;
   cout << "Tiempo de ejecucion: " << static_cast <float> (delay) << " segundos." << endl;

   return 0;
}

void populate_list()
{
   list<int>::iterator list_iter1;
   int i;

   for(int i=0 ; i<ORDERS ; i+=1)
   {
      orders_list.push_back(rand());
   }

   cout << orders_list.size() << endl;

   /*list_iter1 = orders_list.begin();
   while( list_iter1 != orders_list.end())
   {
   cout << *list_iter1 << endl;
   list_iter1++;
   }*/
}

void save_list(list<int>::iterator pos, int orders_processed)
{
   float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
   orders_processed ++;

   printf("orden [%d] %d fue procesada correctamente\n", *pos, orders_processed);

   time_t actual_time = time(0);
   while(time(NULL) - actual_time < r);
   cout << orders_list.size() << endl;
}
