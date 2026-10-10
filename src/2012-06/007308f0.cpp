// from server: 97% by atomic.potato
extern "C" void continuation();

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

int g_value;

void S::f()
{
    g_value = 0;
    a = 0xba7154;
    b = 0xba714c;
    g = 0xba7140;
    e = 0xba7134;
    continuation();
}
