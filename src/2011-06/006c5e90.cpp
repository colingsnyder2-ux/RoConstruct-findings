// from server: 57% by atomic.potato
extern "C" void __cdecl std_locale_facet_Incref(void);

struct S
{
    unsigned short value;
    void* object;
    S(void* source, int unused);
};

S::S(void* source, int unused)
{
    value = 0x48;
    object = *(void**)source;
    unused = 0;
    std_locale_facet_Incref();
}
