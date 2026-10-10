// from server: 29% by tester
struct S {
    char pad0[0xc];
    int field_c;
    void f(int);
};

extern "C" int __cdecl sub_541d90(int);
extern "C" int __cdecl sub_541da0(int);
extern "C" int __cdecl sub_54c630(int);
extern "C" void __cdecl sub_5442d0(int, int);
extern "C" void __cdecl sub_543610(int, int);

void S::f(int a) {
    int v = a;
    while (1) {
        if (*(char*)sub_541d90(v) != 0)
            break;
        int t = *(int*)sub_541da0(v);
        f(t);
        v = *(int*)sub_54c630(v);
        sub_5442d0((int)&field_c, a);
        sub_543610((int)&field_c, a);
    }
}
