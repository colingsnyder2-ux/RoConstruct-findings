// from server: 93% by atomic.potato
extern "C" void __declspec(noreturn) continuation();

struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int value;
    int g;

    void f();
};

void S::f()
{
    a = 0x9d7474;
    b = 0x9d7468;
    e = 0x9d745c;
    value = 0x9d7454;
    continuation();
}
