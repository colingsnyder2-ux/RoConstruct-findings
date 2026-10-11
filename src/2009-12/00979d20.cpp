// from server: 60% by atomic.potato
extern "C" void f0073dcf0(void*, const char*, const char*, int, int);
extern "C" void __cdecl f007f4929(const char*);

struct S
{
    void f();
};

void S::f()
{
    f0073dcf0((void*)0xb96860, (const char*)0x9e2468,
               (const char*)0x9bb084, 0xa8, 0xf);
    f007f4929((const char*)0x988ba0);
}
