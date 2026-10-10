// from server: 8% by atomic.potato
struct S
{
    int unused0;
    int unused1;
    int unused2;
    int unused3;
    int offset;
    int (*call)(int, double);

    int f();
};

int S::f()
{
    return 0;
}
