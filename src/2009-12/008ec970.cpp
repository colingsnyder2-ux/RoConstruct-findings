// from server: 43% by atomic.potato
struct V
{
    typedef void* (__thiscall *Fn)(V*, int);
    Fn vfunc[120];
};

extern "C" V* sym(void*);

struct S
{
    void* f(int);
};

void* S::f(int value)
{
    S* self = this;
    V* p = (V*)sym(self);
    return p->vfunc[119](p, value);
}
