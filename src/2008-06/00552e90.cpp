// from server: 50% by colin
struct Agg {
    void f();
};

extern "C" void __stdcall sub_540660(void*, void*, int);
extern "C" void __stdcall sub_5530a0(void*);
extern "C" void __stdcall sub_541180(void*);

void Agg::f() {
    char a[8];
    char b[8];
    sub_540660(a, b, 1);
    sub_5530a0(a);
    sub_541180(a);
}
