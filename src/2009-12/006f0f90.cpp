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
    a = 0x9db634;
    b = 0x9db628;
    e = 0x9db61c;
    f_value = 0x9db614;
}
