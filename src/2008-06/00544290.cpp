// from server: 42% by tester
struct S {
    int f(int, int);
};

extern "C" void __stdcall sub_553220(int*);
extern "C" void __stdcall sub_5456D0(int);

int S::f(int a, int b) {
    int tmp;
    sub_553220(&tmp);
    sub_5456D0(a);
    sub_553220((int*)((char*)this + 0x14));
    return (int)this;
}
