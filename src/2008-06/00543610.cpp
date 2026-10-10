// from server: 30% by atomic.potato
extern "C" void __cdecl Function006A067A(void *);

struct S
{
    void f(void *);
};

void S::f(void *p)
{
    Function006A067A(p);
}
