// from server: 66% by colin
// roc 2007-08 00538920  unit: RBX::VScriptContext::?$FactoryProduct  size: 129 bytes

extern "C" int __cdecl sub_5BDA90(int, int);
extern "C" int __cdecl sub_5BDF20(int, int);
extern "C" int __cdecl sub_5BDE00(int, int, int);
extern "C" int __cdecl sub_5BD850(int, int, int);
extern "C" int __cdecl sub_5BD590(int, int);
extern "C" int __cdecl sub_56D680();
extern "C" void __cdecl sub_4B1260(int, int);

extern int dword_8ABC2C;

struct S {
    bool f(int a, int b, int* out);
};

bool S::f(int a, int b, int* out)
{
    int edi = sub_5BDA90(a, b);
    if (edi == 0)
        return false;

    if (sub_5BDF20(a, b) == 0)
    {
        sub_5BD590(a, -2);
        return false;
    }

    sub_5BDE00(a, -10000, dword_8ABC2C);
    if (sub_5BD850(a, -1, -2) == 0)
        return false;

    sub_5BD590(a, -3);
    *out = sub_56D680();
    sub_4B1260((int)(out + 1), edi);
    return true;
}
