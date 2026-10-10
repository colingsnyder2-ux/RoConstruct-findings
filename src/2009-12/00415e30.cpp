// from server: 70% by atomic.potato
struct PasteVerb
{
    int f();
};

extern "C" int type_info_equal(const void *, const void *);
extern void *g_type_info;

int PasteVerb::f()
{
    void *p = *(void **)this;
    const void *q = *(const void **)((char *)p + 8);
    return type_info_equal(q, g_type_info);
}
