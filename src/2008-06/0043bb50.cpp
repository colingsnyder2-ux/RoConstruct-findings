// from server: 25% by atomic.potato
struct S {
    void f();
};

extern "C" {
    void __stdcall sub_80245c(void*);
    void __stdcall sub_802468(void*);
}

void sub_43bad0(void*, void*);

void S::f() {
    char buf[0x30];
    void* p = 0;
    char tmp[0x1c];
    sub_80245c(&buf[0x48]);
    sub_43bad0(&tmp[0x18], &buf[0x48]);
    sub_802468(&tmp[0x18]);
    sub_802468(&buf[0x48]);
}
