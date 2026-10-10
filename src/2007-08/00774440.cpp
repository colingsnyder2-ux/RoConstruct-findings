// from server: 89% by colin
extern "C" void* __cdecl sub_5B6D50(int, int, int);
extern "C" void* __cdecl sub_577100(void*);
extern "C" void __cdecl sub_5873E0(void*, void*);
extern "C" void __cdecl sub_630D23(void*);

struct S {
    void f();
};

void S::f() {
    void* p1 = sub_5B6D50(0, 0x79B698, 0x7AA0B0);
    void* p2 = sub_577100(p1);
    sub_5873E0((void*)0x8C6214, p2);
    *(void**)0x8C6214 = (void*)0x7B864C;
    sub_630D23((void*)0x77B850);
}
