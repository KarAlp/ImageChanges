#include <iostream>
#include <fstream>
using namespace std;
struct Image

{
// quick tip is that we have to order big to lower data types because otherwise it uses lower data usages
string format;
unsigned int rows;
unsigned int cols;
vector<short> grayvalues
string format;

};
Image readPGM(const string datainame);
short getGrayval(const Image %img,unsigned int r, unsigned int c)

void setGrayval(Imageunsigned int r, unsigned int c)

int writePGM (const Image imge,)