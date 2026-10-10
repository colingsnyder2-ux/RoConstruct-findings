// from server: 55% by atomic.potato
struct S
{
    unsigned short type;
    void *value;
    S *f();
};

extern "C" void __cdecl Incref(void *);

S *S::f()
{
    type = 0x48;
    value = *(void **)this;
    Incref(0);
    return this;
}
