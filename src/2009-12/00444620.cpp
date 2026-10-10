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

extern "C" void __cdecl sub_637b00();

S::S()
{
    a = 0x9aa21c;
    b = 0x9aa210;
    e = 0x9aa204;
    f = 0x9aa1fc;
    sub_637b00();
}
