// from server: 51% by atomic.potato
// roc 2009-12 00718a00  unit: RBX::JointsService  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00718a00

struct type_info;

extern "C" {
typedef int (__thiscall *FnPtr)(void*);
}

struct ProtectedString;

struct Placeholder {
    virtual void f();
};

struct S {
    static void* get();
};

void* S::get() {
    return 0;
}

void* __cdecl sub_718a00(void* p) {
    if (p == 0) {
        return 0;
    }
    void* q = *(void**)p;
    void* r;
    if (q != 0) {
        void** vt = *(void***)q;
        FnPtr fn = (FnPtr)vt[1];
        fn(q);
        r = q;
    } else {
        r = (void*)0xb0030c;
    }
    extern bool __stdcall type_info_equal(void*, void*);
    bool b = type_info_equal(r, (void*)0xb35dd8);
    if (!b) {
        return 0;
    }
    return (char*)*(void**)p + 4;
}
