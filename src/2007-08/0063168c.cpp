// from server: 46% by colin
// roc 2007-08 0063168c  unit: std::bad_alloc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063168c

extern "C" void __cdecl helper_631620();
extern "C" void __cdecl helper_6316cc();

struct S {
    void f();
};

void S::f() {
    helper_631620();
    helper_6316cc();
}
