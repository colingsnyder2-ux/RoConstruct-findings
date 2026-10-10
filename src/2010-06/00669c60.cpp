// from server: 75% by atomic.potato
struct S
{
    unsigned int v0;
    unsigned int v4;
    unsigned int v18;
    unsigned int v1c;
    unsigned int v94;

    void f();
};

void S::f()
{
    v0 = 0xa3bd74;
    v4 = 0xa3bd6c;
    v18 = 0xa3bd60;
    v1c = 0xa3bd54;
    v94 = 0xa3bd4c;
    void (*p)();
    p = 0;
    p();
}
