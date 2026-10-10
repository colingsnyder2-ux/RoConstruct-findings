// from server: 66% by atomic.potato
extern "C" void __stdcall Imported(void *, void *);

struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    S *p = this;
    Imported(arg, (char *)p + 0x74);
    return (int)arg;
}
