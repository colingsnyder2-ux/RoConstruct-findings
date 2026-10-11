// from server: 65% by atomic.potato
struct S
{
    int a;
    int b;
    int c[4];
    int d[24];
    int e;
    int f;
    void g();
};

void S::g()
{
    a = 0xbeba64;
    b = 0xbeba58;
    c[0] = 0xbeba4c;
    c[1] = 0xbeba40;
    d[4] = 0xbeba30;
    d[5] = 0xbeba04;
}
