// from server: 45% by colin
extern "C" void __stdcall sub_0054D290(void*, int, int);
extern "C" void __stdcall sub_0054F300(void*, void*, int, int);
extern "C" void __stdcall sub_0054B960(void*);
extern "C" void __stdcall sub_0077E518();

struct S {
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    sub_0077E518();
    *(unsigned char*)((char*)this + 0x3c) = 0;
    *(unsigned char*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0xa0) = 0;
    *(int*)((char*)this + 0xa4) = 0;
    *(int*)((char*)this + 0xa8) = 0;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0xb0) = 0x10;
    *(int*)this = 0x7a7b6c;

    char buf[8];
    sub_0054D290(buf, a, 0);
    sub_0054F300(this, buf, b, c);
    sub_0054B960(buf);
}
