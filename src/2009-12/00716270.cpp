// from server: 92% by atomic.potato
struct S
{
    void f();
    int a[38];
};

void S::f()
{
    a[0] = (int)0x9dee74;
    a[1] = (int)0x9dee68;
    a[6] = (int)0x9dee5c;
    a[7] = (int)0x9dee54;
    a[37] = (int)0x9dee3c;
}
