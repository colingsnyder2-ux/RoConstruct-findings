// from server: 88% by why2
extern "C" void __cdecl helper_70ac40(int);

struct S {
    void f();
};

void S::f() {
    char b = 0;
    helper_70ac40(*(int*)&b);
}
