/* Group Battle
Mohammad Shafayet Hossain A19EC4016
MD Monirul Islam Molla    A19EC4013 */

#include <iostream>
#include <vector>
using namespace std;

const unsigned short int frame=10;
const unsigned short int bowl=2;
const unsigned short int bowling_frame_data[frame][bowl]={
(10,0),(2,4),(8,1),(9,1),(0,0),(9,1),(4,5),(5,5),(7,2),(10,0)};

enum class pin_status{STRIKE,SPARE,DOUBLE_GOTTER,NONE};
struct Bowling
{
	unsigned short int frame;
	unsigned short int pins1;
	unsigned short int pins2;
	pin_status pin_ST;
}

void GetFrame(vector<Bowling*>&);
void GetStatus(vector<Bowling*>&);


int main()
{
	vector<Bowling*>bowl_struct_ptr;
	GetFrame(bowl_struct_ptr);
	GetStatus(bowl_struct_ptr);
	
	for(auto dam:bowl_struct_ptr )
	{
		delete dam;
	}
	
	return 0;
}

void GetFrame(vector<Bowling*> &bowl_struct_ptr)
{
	for int(i=0;i<frame;i++)
	{
		int data=0;
	}
	//
	
}

void GetStatus(vector<Bowling*> &bowl_struct_ptr)
{
	bool strike= false;
	for(int i=0; i<bowl_struct_ptr.size();i++)
	{
		int total_pins=(bowl_struct_ptr(i)->pins1 + bowl_struct_ptr(i)->pins2);
		if(bowl_struct_ptr[i]->pins1==10)
		{
			bowl_struct_ptr[i]->pin_ST= pin_status:: STRIKE;
		}
		else if(total_pins==10)
		{
			bowl_struct_ptr[i]->pin_ST= pin_status:: SPARE;
			
		}
		
		else if(total_pins>0)
		{
			bowl_struct_ptr[i]->pin_ST= pin_status:: N0NE;
		}
		
		else
		{
			bowl_struct_ptr[i]->pin_ST= pin_status::DOUBLE_GOTTER ;
		}
		switch(bowl_struct_ptr[i]->pin_ST)
		{
			case pin_status:: STRIKE:
				cout<<"Strike!! your are amazing"<<endl;
				break;
			default:
				break;
		}
		
		if(strike==false)
		{
			cout<<"your are aweful at bowling"<<endl;
		}
		else
		{
			cout<<"you got a strike"<<endl;
		}
	
	}
		
	
}


