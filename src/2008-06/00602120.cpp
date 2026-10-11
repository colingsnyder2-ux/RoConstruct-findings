// from server: 28% by colin
struct S {
    void f();
};

extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall sub_80245C(void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_64E8C0(void*, void*);
extern "C" void __stdcall sub_6015F0(void*, void*, void*);

void S::f() {
    void* p = malloc(0x164);
    if (p) {
        char buf[28];
        sub_80245C(buf);
        sub_64E8C0(p, buf);
        sub_6015F0(this, p, buf);
        sub_802468(buf);
    } else {
        sub_6015F0(this, 0, 0);
    }
}
