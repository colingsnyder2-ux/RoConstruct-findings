// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl G_func_6a0968();
extern "C" void G_func_6a0962();
extern "C" void G_func_6a095c(void*, void*);
extern "C" void G_func_6a067a(void*);

extern "C" void* __stdcall G_imp_802360(void*, int);
extern "C" void* __stdcall G_imp_802364(void*, void*);
extern "C" void* __stdcall G_imp_8023d4(void*);
extern "C" void* __stdcall G_imp_803ed8(void*, const char*, int, int);
extern "C" void* __stdcall G_imp_803ee0(void*);
extern "C" void* __stdcall G_imp_803f14(void*);

void G_func_411b40(void*);
void G_func_413a70(void*);
void G_func_5773c0(void*);

struct S {
    void* field00;
    void* field04;
    void* field08;
    void* field0C;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;

    void f(void* a, void* b);
    void* g1();
    void g2(void*, void*);
};

void S::f(void* a, void* b)
{
    char buf[0xA8];

    G_func_6a0968();
    G_func_6a0962();

    G_imp_802360(buf + 0x1C, 1);

    void* h = G_imp_803ed8(buf + 0x04, (const char*)a, 0x22, 0x40);
    void* r = G_imp_803ee0(h);
    G_imp_802364(buf + 0x24, r);

    G_imp_803f14(buf + 0x04);

    void* p24 = field24;
    void* p28 = field28;
    *(void**)(buf + 0x18) = p24;
    *(void**)(buf + 0x1C) = p28;
    if (p28) {
        _InterlockedExchangeAdd((volatile long*)((char*)p28 + 4), 1);
    }

    G_func_411b40(buf + 0x14);

    void* q = g1();
    void* v = *(void**)q;
    g2(v, buf + 0x18);

    void* c = *(void**)(buf + 0x04);
    if (c) {
        G_func_413a70(c);
        G_func_6a067a(c);
    }

    G_func_5773c0(buf + 0x0C);
    G_imp_8023d4(buf + 0x18);

    void* e = *(void**)(buf + 0x0C);
    if (e) {
        *(void**)((char*)e + 4) = *(void**)(buf + 0x08);
    }

    if (*(void**)(buf + 0x14)) {
        G_func_6a095c(0, *(void**)(buf + 0x10));
    }
}
