// from server: 50% by atomic.potato
struct S
{
    int a;
    int b;
    int pad[4];
    int c;
    int d;
    S();
};

extern "C" void __cdecl G1_func_005980d0();

S::S()
{
    a = 0xA6CABC;
    b = 0xA6CAB0;
    c = 0xA6CAA4;
    d = 0xA6CA98;
    G1_func_005980d0();
}
