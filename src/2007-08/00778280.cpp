// from server: 78% by tester
extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_486ff0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __fastcall sub_407220(int);

struct S {
    void f();
};

void S::f() {
    sub_725520(0x487970, 0x8bdcac);
    *(int*)0x88e310 = 0x79b04c;
    int v = sub_486ff0();
    sub_407220(sub_407410(&v));
}
