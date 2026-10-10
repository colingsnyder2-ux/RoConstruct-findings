// from server: 51% by atomic.potato
struct S
{
    int f();
};

extern "C" void __cdecl sub_4121e0(void *, int *);

int S::f()
{
    int value = 0;
    sub_4121e0(this, &value);
    return (int)this;
}
