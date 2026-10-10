// from server: 71% by atomic.potato
struct S
{
    int a;
    int b;
    int c[4];
    int d;
    int e[28];
    int f;
    void g();
};

void S::g()
{
    a = 0xa3bdfc;
    b = 0xa3bdf4;
    c[4] = 0xa3bde8;
    d = 0xa3bddc;
    f = 0xa3bdd4;
}
