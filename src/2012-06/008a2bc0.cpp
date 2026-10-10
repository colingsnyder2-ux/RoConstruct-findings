// from server: 87% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;

    void f();
};

int g;

void S::f()
{
    g = 0;
    a = 0x00bde594;
    b = 0x00bde588;
    d = 0x00bde57c;
    e = 0x00bde570;
}
