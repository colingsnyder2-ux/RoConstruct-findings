// from server: 41% by tester
struct Any {
    void* content;
};

struct Placeholder {
    char pad[0x14];
    Any value;
};

extern "C" void __stdcall sub_5122D0(void*, void*);

struct Vtbl {
    char pad[0xc];
    void (__stdcall *fn)(void*, void*, void*);
};

struct Holder {
    char pad[0x18];
    Vtbl* vtbl;
};

void Placeholder_assign(Placeholder* self, void* a, void* b, void* c);

void Placeholder_assign(Placeholder* self, void* a, void* b, void* c)
{
    void* tmp1;
    void* tmp2;
    void* p;
    Holder* h;
    Vtbl* v;

    sub_5122D0(&tmp1, a);

    if (self == 0)
        p = (char*)self + 0x14;
    else
        p = 0;

    h = (Holder*)tmp1;
    v = h->vtbl;
    v->fn(p, &tmp2, b);

    sub_5122D0(&tmp1, (char*)a + 8);

    if (self != 0)
        p = (char*)self + 0x14;
    else
        p = 0;

    h = (Holder*)tmp1;
    v = h->vtbl;
    v->fn(p, &tmp2, c);
}
