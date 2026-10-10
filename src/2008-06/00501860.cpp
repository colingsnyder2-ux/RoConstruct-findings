// from server: 83% by atomic.potato
extern "C" void __stdcall bad_cast_copy(void *, const void *);

struct S
{
    S(S *);
    void *vftable;
    int pad0;
    int pad1;
    int value;
};

S::S(S *source)
{
    bad_cast_copy(this, source);
    vftable = (void *)0x827224;
    value = source->value;
}
