// from server: 60% by atomic.potato
typedef void (__thiscall *Callback)(void *, void *);

struct CXTAuxData
{
    void *f(void *);
};

void *CXTAuxData::f(void *arg)
{
    void *p = (char *)this + 0xb0;
    ((Callback)(*(void **)0x0098de94))(arg, p);
    return arg;
}
