// from server: 61% by colin
struct BaseClass {
    void* vtable;
};

struct FactoryProduct : BaseClass {
    char pad[0xE8 - 8];
    void* fieldE8;
    FactoryProduct();
};

struct Creator {
    void* vtable;
    Creator();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl sub_60A350(void*);
extern "C" void __cdecl sub_5B1BE0(void*, void*);
extern "C" void __cdecl sub_541BF0(void*, void*);

extern void* g_7B6184;
extern void* g_7B78D8;
extern void* g_7B7894;
extern void* g_7B788C;
extern void* g_7B7884;
extern void* g_7B7874;
extern void* g_7B7864;
extern void* g_7B7854;
extern void* g_7B7844;
extern void* g_7B7834;
extern void* g_7B7824;
extern void* g_7B780C;

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __stdcall sub_77E6AC(void*);

struct StdString {
    char buf[0x1C];
    StdString(const char*);
    ~StdString();
};

FactoryProduct::FactoryProduct()
{
    Creator* c = (Creator*)operator_new(0x88);
    if (c) {
        sub_60A350(c);
        *(void**)c = &g_7B6184;
    } else {
        c = 0;
    }
    sub_5B1BE0(this, c);

    *(void**)this = &g_7B7894;
    *(void**)((char*)this + 4) = &g_7B788C;
    *(void**)((char*)this + 0x10) = &g_7B7884;
    *(void**)((char*)this + 0x14) = &g_7B7874;
    *(void**)((char*)this + 0x2C) = &g_7B7864;
    *(void**)((char*)this + 0x44) = &g_7B7854;
    *(void**)((char*)this + 0x5C) = &g_7B7844;
    *(void**)((char*)this + 0x74) = &g_7B7834;
    *(void**)((char*)this + 0x8C) = &g_7B7824;
    *(void**)((char*)this + 0xE8) = &g_7B780C;

    StdString s((const char*)&g_7B78D8);
    sub_541BF0(this, &s);
    s.~StdString();
}
