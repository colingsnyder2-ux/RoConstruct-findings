// from server: 40% by atomic.potato
struct S
{
    int f();
};

void g(int, int);

int S::f()
{
    int a = 0;
    char b = 0;
    g((int)&b, (int)this);
    return (int)this;
}
