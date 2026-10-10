// from server: 93% by atomic.potato
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

extern "C" void __declspec(noreturn) S_tail();

S::S()
{
    a = 0x9d2aac;
    b = 0x9d2aa0;
    e = 0x9d2a94;
    f = 0x9d2a8c;
    S_tail();
}
