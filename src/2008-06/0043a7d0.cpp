// from server: 67% by colin
struct Arg {
    char pad[0x14];
};

struct Inner {
    char pad[0x18];
    void* p18;
};

struct Mid {
    char pad[0x198];
    void* p198;
};

struct Outer {
    char pad[0x128];
    Mid* p128;
    Inner* p12c;
    void method(Arg* a, void* b);
};

struct Vtbl {
    char pad[0xc];
    void (__stdcall *fn)(void*, Arg*, void*);
};

void* __cdecl operator new(unsigned int);

struct Ref {
    void* value;
    Ref& operator=(const Ref&);
    ~Ref();
};

void Outer::method(Arg* a, void* b)
{
    Ref tmp;
    tmp.value = 0;
    void* p = p128->p198;
    tmp = *(Ref*)&p;
    Arg* arg = a ? (Arg*)((char*)a + 0x14) : 0;
    Inner* inner = p12c;
    void* obj = inner->p18;
    Vtbl* vt = *(Vtbl**)obj;
    vt->fn(obj, arg, b);
    tmp.~Ref();
}
