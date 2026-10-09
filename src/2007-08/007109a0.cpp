// from server: 53% by colin
// roc 2007-08 007109a0  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007109a0

struct CXTPOffice2007Image
{
    void sub_7102A0(int);
    int sub_7109A0(int, int, int);
};

extern "C" void __stdcall sub_77DD74();
extern "C" void __stdcall sub_77DDBC(void*);

int CXTPOffice2007Image::sub_7109A0(int a, int b, int c)
{
    sub_77DD74();
    sub_7102A0(a);
    sub_77DDBC(&b);
    sub_77DDBC(&c);
    return a;
}
