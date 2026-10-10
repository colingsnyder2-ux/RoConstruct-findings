// from server: 30% by colin
// roc 2007-08 0041eb90  unit: CSettingsExplorer  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041eb90

extern "C" void __stdcall _invalid_parameter_noinfo();

struct CSettingsExplorer {
    void method(int, int);
};

struct Inner {
    void* field0;
    char pad[0x50];
    void* field54;
};

struct Outer {
    char pad0[0xd0];
    void* fieldD0;
};

struct Vtbl {
    char pad0[0x18c];
    void* (__thiscall* fn18c)(void*);
};

struct Obj {
    Vtbl* vtbl;
};

struct Vec {
    void* begin;
    void* end;
    void* cap;
};

extern "C" void* __stdcall sub_41eb40(void*);
extern "C" void* __stdcall sub_664810(void*);
extern "C" void* __stdcall sub_664840(void*, void*);
extern "C" void __stdcall sub_4ee620(void*, void*, void*, void*);
extern "C" void __stdcall sub_41dcf0(void*, void*, void*, void*);
extern "C" void __stdcall sub_62fc62(void*);
extern "C" void __stdcall sub_77e6d8();

void CSettingsExplorer::method(int, int)
{
    void* p = sub_41eb40(*(void**)((char*)this + 0x304));
    Vec v;
    v.begin = 0;
    v.end = 0;
    v.cap = 0;
    Vtbl* vt = ((Obj*)this)->vtbl;
    void* r = vt->fn18c(this);
    void* ebx = *(void**)((char*)r + 0xd0);
    void* it = sub_664810(ebx);
    void* cur = it;
    while (cur != 0) {
        void* tmp = cur;
        void* e = sub_664840(ebx, &tmp);
        Vtbl* vt2 = *(Vtbl**)e;
        void* r2 = ((void* (__thiscall*)(void*))vt2->fn18c)(e);
        void* edi = *(void**)((char*)r2 + 0x54);
        void* endp = v.end;
        if (v.begin != 0) {
            unsigned int a = ((char*)endp - (char*)v.begin) >> 2;
            unsigned int b = ((char*)v.cap - (char*)v.begin) >> 2;
            if (a < b) {
                *(void**)endp = edi;
                v.end = (char*)endp + 4;
                goto next;
            }
        }
        if (v.begin > endp) {
            sub_77e6d8();
        }
        sub_4ee620(&v, &v.end, &edi, &v.cap);
    next:
        cur = tmp;
    }
    void* b = v.end;
    void* a = v.begin;
    if (a > b) {
        sub_77e6d8();
        a = v.begin;
    }
    if (a > v.end) {
        sub_77e6d8();
    }
    sub_41dcf0(p, a, b, &v);
    if (v.begin != 0) {
        sub_62fc62(v.begin);
    }
}
