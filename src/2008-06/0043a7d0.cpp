// from server: 41% by colin
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

extern "C" void __stdcall sub_576f00(void*, void*);
extern "C" void __stdcall sub_5773c0(void*);

void Outer::method(Arg* a, void* b)
{
    void* tmp = 0;
    void* tmp2 = 0;
    sub_576f00(&tmp, p128->p198);
    Arg* arg = a ? (Arg*)((char*)a + 0x14) : 0;
    Inner* inner = p12c;
    Vtbl* vt = *(Vtbl**)inner->p18;
    vt->fn(inner->p18, arg, b);
    sub_5773c0(&tmp);
}
