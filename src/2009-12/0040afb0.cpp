// from server: 47% by atomic.potato
struct S
{
    S();
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
};

extern "C" void __cdecl target();

S::S()
{
    a = 0x9a01a4;
    b = 0x9a019c;
    e = 0x9a0190;
    f = 0x9a0188;
    target();
}
