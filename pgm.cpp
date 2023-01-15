#include "read.h"

using namespace std;
Image readPGM(cons string dateinname)
{
    Image image;

    fstream in;
    in.open(filename,ios::in)
    if(!in.is_open())
    {
        cout<< "cant oppened"<<endl;
        return image;
    }
    getline(in, image.format);
     if (image.format != "P")
        {
            return image;
        }
    get line (in, image.comment);
    in >> image.cols;
    in >> image.rows;
  cout<<image.cols*image.rows<<endl;
   in << image.maxVal;
   image.grayvalues.resize(image.cols*image.rows);

}

int main ()
{
     Image imaj;
    imaj = readPGM("Deneme_ascii.pgm")
    
    return 0;
}