// from server: 55% by colin
// roc 2007-08 00414170  size: 40 bytes
extern "C" void __cdecl sub_4136B0(void*, int);
extern "C" void __cdecl sub_630B9E(void*, const char*);

struct S {
    char buf[0x28];
    void f(int);
};

void S::f(int arg) {
    sub_4136B0(buf, arg);
    *(int*)(buf + 4) = 0x78718c;
    sub_630B9E(buf, (const char*)0x84126c);
}
