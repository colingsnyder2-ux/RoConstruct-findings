// from server: 35% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

extern "C" {
    void* __stdcall __CxxFrameHandler3(void*, void*, void*, void*);
}

struct S {
    void f(void*);
};

void S::f(void* p) {
    if (p != 0) {
        void* q = *(void**)p;
        if (q != 0) {
            void** vt = *(void***)q;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(q);
        } else {
            q = (void*)0x8827c8;
        }
        if (*(type_info*)q == *(type_info*)0x8a21d4) {
            void* r = *(void**)p;
            r = (char*)r + 4;
            if (r != 0) {
                return;
            }
        }
    }
    bad_cast bc((const char*)0x786e04);
    *(void**)((char*)&bc + 0) = (void*)0x786dfc;
    __CxxFrameHandler3((void*)0x411850, &bc, 0, 0);
}
