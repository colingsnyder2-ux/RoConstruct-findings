// from server: 70% by atomic.potato
struct PasteVerb
{
    int f();
};

typedef int (__thiscall *PasteVerbFn)(PasteVerb *);

extern "C" int __cdecl type_info_equal(void *, void *);

PasteVerb *g_pasteverb;
void *g_typeinfo;
void *g_import;

int PasteVerb::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return ((int (__thiscall *)(void *, void *))g_import)(g_typeinfo, q);
}
