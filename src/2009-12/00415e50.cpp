// from server: 88% by atomic.potato
struct PasteVerb
{
    void *value;
    int f();
};

extern "C" int (__thiscall *type_info_equal)(void *, void *);

int PasteVerb::f()
{
    void *p = *(void **)((char *)this);
    void *q = *(void **)((char *)p + 8);
    return type_info_equal((void *)0x00b033e8, q);
}
