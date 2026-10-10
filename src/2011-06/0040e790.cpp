// from server: 83% by atomic.potato
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
    a = 0xA5C46C;
    b = 0xA5C460;
    e = 0xA5C454;
    value = 0xA5C448;
}
