// from server: 42% by colin
struct EnumDesc {
    void* vtable;
    void* items_begin;
    void* items_end;
    void* items_cap;
    void* name;
    void* lookup;
    void* legacy;
    void* legacyName;
    void* allItems;

    EnumDesc(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
};

struct Helper {
    void sub_4452E0(void* a);
};

extern "C" void* __cdecl sub_4453C0(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __cdecl sub_446820(void* a, void* b);
extern "C" void __cdecl sub_62FC62(void* a);

extern void* g_78FDA0;

EnumDesc::EnumDesc(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    void* tmp = sub_4453C0(a, b, c, d, e);
    void* v = *(void**)tmp;
    *(void**)tmp = 0;
    this->items_begin = 0;
    this->items_end = (void*)&this->items_begin;
    *(void**)this->items_end = v;
    void* r = sub_446820(f, g);
    ((Helper*)this)->sub_4452E0(r);
    sub_62FC62(this->items_begin);
    this->vtable = &g_78FDA0;
}
