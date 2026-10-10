// from server: 86% by colin
struct S {
    bool f(int a, int b);
};

extern "C" int __cdecl sub_005bda90(int a, int b);
extern "C" int __cdecl sub_005bdf20(int a, int b);
extern "C" void __cdecl sub_005bde00(int a, int b, int c);
extern "C" int __cdecl sub_005bd850(int a, int b, int c);
extern "C" void __cdecl sub_005bd590(int a, int b);
extern "C" void __cdecl sub_00537bd0(int a);

extern int dword_008abe78;

bool S::f(int a, int b)
{
    int v = sub_005bda90(a, b);
    if (v) {
        if (sub_005bdf20(a, b)) {
            sub_005bde00(a, -10000, dword_008abe78);
            if (sub_005bd850(a, -1, -2)) {
                sub_005bd590(a, -3);
                sub_00537bd0(v);
                return true;
            }
        } else {
            sub_005bd590(a, -2);
        }
    }
    return false;
}
