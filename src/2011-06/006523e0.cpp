// from server: 89% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl helper1();
extern "C" bool __stdcall helper2(const type_info*, const type_info*);

struct S {
};

void* __cdecl f(void** p) {
    void* result;
    if (p == 0) {
        return 0;
    }
    void* v = *p;
    if (v != 0) {
        void** vtbl = *(void***)v;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        result = fn(v);
    } else {
        result = (void*)0xc07a44;
    }
    if (helper2((const type_info*)result, (const type_info*)0xc3de3c)) {
        return (char*)*p + 4;
    }
    return 0;
}
