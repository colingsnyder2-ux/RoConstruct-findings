// from server: 41% by colin
struct EnumDescriptor {
    void* vtable;
    EnumDescriptor();
};

struct EnumItem {
    int a;
    int b;
};

struct EnumDesc {
    void* vtable;
    void* items_begin;
    void* items_end;
    void* items_cap;
    EnumDesc(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void* __stdcall sub_445480(void* out, int a, int b, int c, int d, int e, int f, int g);
extern "C" void* __stdcall sub_446820(int a, int b);
extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __stdcall sub_442d60();

void* g_78fdc8 = 0;

EnumDesc::EnumDesc(int a, int b, int c, int d, int e, int f, int g)
{
    void* tmp;
    sub_445480(&tmp, a, b, c, d, e, f, g);
    void* v = *(void**)&tmp;
    *(void**)&tmp = 0;
    this->items_begin = 0;
    this->items_end = 0;
    this->items_cap = 0;
    this->items_begin = v;
    void* p = sub_446820(a, b);
    sub_442d60();
    sub_62fc62(p);
    this->vtable = &g_78fdc8;
}
