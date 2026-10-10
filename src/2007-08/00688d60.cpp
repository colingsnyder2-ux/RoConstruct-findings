// from server: 28% by colin
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" __declspec(dllimport) DWORD __stdcall GetFileAttributesA(const char*);
extern "C" __declspec(dllimport) long __stdcall VariantClear(void*);

struct CXMLEnumerator {
    char pad0[0x34];
    int field34;
    char pad38[8];
    void* field40;
    char field44[4];
    void* field48;
    int method_688620();
    void method_688d20(void*);
    int method_688d60(const char*);
};

struct VariantLike {
    WORD vt;
    WORD r1;
    WORD r2;
    WORD r3;
    DWORD d1;
    DWORD d2;
};

extern "C" void __stdcall sub_738562(VariantLike*, const char*);
extern "C" void __stdcall sub_6319a0(int);
extern "C" void __stdcall sub_77e9d8(VariantLike*);

int CXMLEnumerator::method_688d60(const char* name) {
    DWORD attrs = GetFileAttributesA(name);
    if (attrs == 0xFFFFFFFF) return 0;
    if (attrs & 0x10) return 0;
    if (this->method_688620() == 0) return 0;

    VariantLike v;
    v.vt = 0;
    sub_738562(&v, name);

    if (this->field40 == 0) {
        sub_6319a0(0x80004003);
    }

    void* p = this->field40;
    int* vtbl = *(int**)p;
    typedef int (__stdcall *Fn)(void*, VariantLike*, void*);
    Fn fn = (Fn)vtbl[0xE8/4];
    int hr = fn(p, &v, 0);

    sub_77e9d8(&v);

    if (hr < 0) return 0;
    if (v.vt == 0) return 0;

    this->method_688d20(&this->field40);

    void* q = this->field48;
    if (q != 0) {
        this->field48 = 0;
        int* qvt = *(int**)q;
        typedef void (__stdcall *Fn2)(void*);
        Fn2 fn2 = (Fn2)qvt[2];
        fn2(q);
    }
    this->field34 = 0;
    return 1;
}
