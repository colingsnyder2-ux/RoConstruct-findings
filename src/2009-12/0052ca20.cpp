// from server: 83% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f_value;
    int g;

    void f();
};

void S::f()
{
    a = 0x9bc8dc;
    b = 0x9bc8d4;
    e = 0x9bc8c8;
    f_value = 0x9bc8c0;
}
