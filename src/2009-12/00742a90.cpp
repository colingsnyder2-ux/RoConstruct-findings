// from server: 85% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e[28];
    int f;
    void g();

    void finish();
};

void S::finish()
{
}

void S::g()
{
    a = 0x9e2d74;
    b = 0x9e2d6c;
    c = 0x9e2d60;
    d = 0x9e2d58;
    f = 0x9e2d40;
    finish();
}
