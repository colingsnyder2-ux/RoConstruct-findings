// from server: 48% by atomic.potato
extern "C" void __cdecl f006be120(void *, void *, void *);

struct EquationDisplay
{
    int f();
};

int EquationDisplay::f()
{
    register int result = (int)this;
    f006be120(0, (void *)0x009ee930, 0);
    return result;
}
