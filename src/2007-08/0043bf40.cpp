// from server: 63% by colin
struct MVCXTPPropertyGridItem
{
    char pad[0x114];
    void* field114;
    void* field118;
    void f(void* a, void* b);
};

struct VariantTemp
{
    void* storage;
    VariantTemp();
    ~VariantTemp();
};

extern "C" void __stdcall sub_439850(void* self, void* arg);
extern "C" void __stdcall sub_5595A0(VariantTemp* self);

void MVCXTPPropertyGridItem::f(void* a, void* b)
{
    VariantTemp v;
    void* p = field114;
    void* q = *(void**)((char*)p + 0x188);
    sub_439850(&v, q);
    void* r = 0;
    if (a != 0)
    {
        r = (char*)a + 4;
    }
    void* s = field118;
    void* t = *(void**)((char*)s + 0x18);
    void* u = *(void**)t;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)u + 8);
    fn(t, r, b);
    sub_5595A0(&v);
}
