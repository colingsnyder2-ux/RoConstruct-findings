// from server: 63% by tester
// roc 2008-06 004a7150  unit: RBX::VHint::?$FactoryProduct::Creator  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7150

extern "C" {
    void __stdcall sub_802460(void*);
    void __stdcall sub_802468(void*);
}

struct String {
    void* pad[4];
    String();
    ~String();
};

struct Creator {
    void sub_4a6e20(void*, void*);
    void sub_4a7150(void* arg1, void* arg2);
};

void Creator::sub_4a7150(void* arg1, void* arg2) {
    String s;
    sub_802460(&s);
    sub_4a6e20(arg1, &s);
    void* p = *(void**)((char*)&s + 4);
    if (p) {
        void* q = *(void**)&s;
        void* r = (char*)p - 0x14;
        if (r) {
            r = (char*)r + 0x14;
        } else {
            r = 0;
        }
        void* vtable = *(void**)q;
        void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtable + 0x20);
        fn(r, &s);
    }
    sub_802468(&s);
}
