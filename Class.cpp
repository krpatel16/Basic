#include <iostream>

using namespace std;

class box
{
	int h, w, d, vol;

    public:
	box()
	{
	  cout << " Enter Height = " ;
	  cin >> h;
	  cout << " Enter width = " ;
	  cin >> w;
	  cout << " Enter depth = " ;
	  cin >> d;
	}

	void set_volume(int siz)
	{
	   vol = siz;
	}

        int get_volume()
        {
          cout << "reqire volume is = " << vol;
          cout << endl;
          return vol;
        }

	~box()
	{
	    cout << "destroy the block" << endl;
	}
	int volume()
	{
	    int size;
	    size = h * w * d;
	    cout << "Calculted Volume = ";
            cout << size << endl;
	    return size;
	}

};

int main()
{
    int size;
    box b;
    //b.volume();
    size = b.volume();


    if (size == 60)
    {
      cout << "requied volume" << endl;
    }else
    {
      b.set_volume(60);
      b.get_volume();
     // b.volume();
    }

    //cin.get(;)

    return 0;
}
