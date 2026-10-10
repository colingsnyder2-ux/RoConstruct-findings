// from server: 86% by why2
struct S {
    char pad[8];
    void f();
};

extern "C" void __stdcall sub_6b3b50(void*);

void S::f() {
    sub_6b3b50((char*)this + 8);
}
