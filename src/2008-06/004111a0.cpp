// from server: 18% by atomic.potato
struct S {
    void f();
};

extern "C" void __cdecl sub_6a0c56();

void S::f() {
    *(int*)this = 0x80dfc8;
    sub_6a0c56();
}
