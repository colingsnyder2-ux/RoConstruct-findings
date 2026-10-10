// from server: 91% by colin
// roc 2007-08 00774480  size: 56 bytes

extern "C" void* __stdcall sub_5B6D50(int, const char*, const char*);
extern "C" void* __stdcall sub_577100(void*);
extern "C" void __stdcall sub_5873E0(void*, void*);
extern "C" void __stdcall sub_630D23(void*);

struct S {
    void f();
};

void S::f() {
    void* p1 = sub_5B6D50(0, (const char*)0x79b698, (const char*)0x7aa0a8);
    void* p2 = sub_577100(p1);
    sub_5873E0((void*)0x8c6334, p2);
    *(void**)0x8c6334 = (void*)0x7b8674;
    sub_630D23((void*)0x77b860);
}
