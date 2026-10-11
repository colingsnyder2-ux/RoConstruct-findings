// from server: 49% by colin


extern "C" void __stdcall _invalid_parameter_noinfo();

void* __stdcall make_value_00616240();
void* func_00616240() {
    static void* value = make_value_00616240();
    return value;
}

void __stdcall sub_00557330(void*, void*);
void __stdcall sub_004124c0(void*, int, void*);

struct Vec {
    char* begin;
    char* end;
    char* cap;
};

struct Holder {
    char pad[0x190];
    Vec v;
    char pad2[8];
};

struct S {
    void* f();
};

void* S::f() {
    sub_00557330((void*)0x616400, (void*)0x97bf00);
    void* p = func_00616240();
    int idx = (int)p;
    Holder* h = (Holder*)((char*)this + 0x190);
    int count = (int)((h->v.end - h->v.begin) >> 3);
    if (idx + 1 > count) {
        sub_004124c0(h, idx + 1, 0);
        return 0;
    }
    int cnt2 = (int)((h->v.cap - h->v.begin) >> 3);
    if (idx >= cnt2) {
        _invalid_parameter_noinfo();
    }
    void* r = *(void**)(h->v.begin + idx * 8);
    return r;
}
