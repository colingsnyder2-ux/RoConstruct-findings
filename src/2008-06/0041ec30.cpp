// from server: 22% by colin
extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall sub_59FBB0();
extern "C" void __stdcall sub_41EB80();

struct S {
    void f();
};

void S::f() {
    void* p = malloc(0x18c);
    if (p) {
        sub_59FBB0();
    } else {
        p = 0;
    }
    sub_41EB80();
}
