// from server: 53% by atomic.potato
struct S
{
    char data[0xe8];
    int f();
};

struct T
{
    int f();
};

int S::f()
{
    S* p = this;
    return ((T*)(p->data + 0xe4))->f() ? (int)(p->data + 0xe4) : (int)(p->data + 0xe4);
}
