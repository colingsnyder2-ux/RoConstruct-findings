// from server: 35% by atomic.potato
typedef unsigned long DWORD;

extern "C" void __stdcall Call982De94(void*, DWORD);

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    Call982De94((char*)this + 0x7c, 0);
    return p;
}
