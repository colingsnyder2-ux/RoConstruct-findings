// from server: 79% by atomic.potato
struct S
{
    int a0;
    int a4;
    int a18;
    int a1c;
    int a94;
    void init();
};

extern "C" void __cdecl f();

void S::init()
{
    a0 = 0x9e4254;
    a4 = 0x9e4248;
    a18 = 0x9e423c;
    a1c = 0x9e4234;
    a94 = 0x9e422c;
    f();
}
