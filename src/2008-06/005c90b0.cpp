// from server: 93% by tester
struct S {
    void f(double* p);
};

extern "C" void __cdecl helper(double, const char*, double);

void S::f(double* p) {
    helper(*p, "%.3g", *p);
}
