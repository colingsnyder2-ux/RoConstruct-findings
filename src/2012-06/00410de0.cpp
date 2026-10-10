// from server: 83% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    void f();
};

void S::f()
{
    a = 0xB4460C;
    b = 0xB44600;
    c = 0xB445F4;
    d = 0xB445E8;
}
