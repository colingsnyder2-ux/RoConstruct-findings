// from server: 93% by atomic.potato
extern "C" void __declspec(noreturn) continuation();

struct S
{
    int a;
    int b;
    int c[4];
    int d;
    int f();
};

int S::f()
{
    a = 0x00a79f64;
    b = 0x00a79f58;
    c[2] = 0x00a79f4c;
    c[3] = 0x00a79f40;
    continuation();
}
