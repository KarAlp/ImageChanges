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

int writefile(constant Image image, const string filename)
{
    fstream file;
    file.open(filename,ios::out)
        
       if(!file.is_open())
       {
        cout << "writed " <<filename<<endl;  
           
          return -1;
       }

    file<<""<<endl;
    file..<<image.cols<<""<<image.rows<<endl;
  
int main ()
{
     Image imaj;
    imaj = readPGM("Deneme_ascii.pgm")
    writefile(img,"yeni.pgm")
    
    return 0;
}
