// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* ptr;
    Control* control;
};

struct Ofstream {
    char data[0x30];
    Ofstream();
    ~Ofstream();
    void open(const char* name, int mode, int prot);
};

struct Workspace {
    char pad[0x24];
    Shared shared;
    void* method750(void*);
    void method860(void*, void*);
    void method8d0(const char* name, int a, int b);
};

extern "C" void* __cdecl sub_6a0968();
extern "C" void __cdecl sub_6a0962();
extern "C" void __cdecl sub_6a095c(void*, int);
extern "C" void __cdecl sub_6a067a(void*);
extern "C" void __cdecl sub_5773c0(void*);
extern "C" void __cdecl sub_413a70(void*);
extern "C" void __cdecl sub_411b40(void*);

typedef void (__stdcall *Fn802360)(int);
typedef void (__stdcall *Fn802364)(void*);
typedef void* (__stdcall *Fn803ed8)(void*, int, int);
typedef void* (__stdcall *Fn803ee0)(void*);
typedef void (__stdcall *Fn803f14)(void*);
typedef void (__stdcall *Fn8023d4)(void*);

extern Fn802360 g_802360;
extern Fn802364 g_802364;
extern Fn803ed8 g_803ed8;
extern Fn803ee0 g_803ee0;
extern Fn803f14 g_803f14;
extern Fn8023d4 g_8023d4;

void Workspace::method8d0(const char* name, int a, int b)
{
    char buf[0xa8];
    Ofstream* ofs = reinterpret_cast<Ofstream*>(buf + 0x18);
    void* tmp = 0;

    sub_6a0968();
    sub_6a0962();

    g_802360(1);
    g_802364(buf + 0x24);

    void* h = g_803ed8(const_cast<char*>(name), 0x22, 0x40);
    void* r = g_803ee0(h);
    g_802364(buf + 0x2c);

    g_803f14(buf + 4);

    Shared local;
    local.ptr = shared.ptr;
    local.control = shared.control;
    if (local.control)
        _InterlockedExchangeAdd(&local.control->strong, 1);

    sub_411b40(buf + 0x1c);

    void* v = method750(buf + 4);
    void* w = *reinterpret_cast<void**>(v);
    method860(buf + 0x20, w);

    if (tmp) {
        sub_413a70(tmp);
        sub_6a067a(tmp);
    }

    sub_5773c0(buf + 0x14);
    g_8023d4(buf + 0x20);

    if (local.ptr) {
        *reinterpret_cast<void**>(static_cast<char*>(local.ptr) + 4) = local.control;
    }

    if (*reinterpret_cast<void**>(buf + 0x10)) {
        sub_6a095c(*reinterpret_cast<void**>(buf + 0xc), 0);
    }
}
