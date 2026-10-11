// from server: 17% by colin
struct Bucket {
    void f();
};

extern "C" void __stdcall sub_5414d0();
extern "C" void __stdcall sub_5411c0();

void Bucket::f() {
    sub_5414d0();
    sub_5411c0();
}
