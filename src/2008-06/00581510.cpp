// from server: 60% by tester
struct Inner {
    void* vt;
    void* f4;
};

struct Mid {
    char pad0[0x288];
    Inner* p288;
};

struct Target {
    char pad0[4];
    void* p4;
    char pad8[4];
    Mid* pC;
    char pad10[0x10];
    void* p20;
    void run();
};

extern "C" void* __fastcall sub_5805D0(void*);
extern "C" void* __fastcall sub_57EA40(void*);
extern "C" void __fastcall sub_5CDDD0(void*, int);
extern "C" void __fastcall sub_5CDE10(void*, void*);
extern "C" void __fastcall sub_58C5C0(void*, void*);

void Target::run() {
    void* v = p20;
    void* r;
    if (v) {
        r = sub_5805D0(v);
    } else {
        r = 0;
    }
    void* edi = sub_57EA40(r);

    Inner* in = pC->p288;
    void* (*fn)(void*, int) = (void* (*)(void*, int))in->f4;
    void* a = fn(in, 4);
    sub_5CDDD0(a, 0);

    Inner* in2 = pC->p288;
    void* (*fn2)(void*, void*) = (void* (*)(void*, void*))in2->f4;
    void* b = fn2(in2, edi);
    sub_5CDE10(b, edi);

    char* s = (char*)p4 + 4;
    void* arg;
    if (*(int*)(s + 0x18) < 0x10) {
        arg = s + 4;
    } else {
        arg = *(void**)(s + 4);
    }
    sub_58C5C0(arg, pC);

    void** obj = (void**)pC;
    void (*final)() = (void (*)())(*(void**)obj);
    final();
}
