// from server: 17% by colin
struct Bucket {
    void f();
};

extern "C" void __stdcall sub_541CA0();
extern "C" void __stdcall sub_541240();

void Bucket::f() {
    sub_541CA0();
    sub_541240();
}
