// from server: 100% by colin
// roc 2007-08 00457f10  unit: RBX::Adorn  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457f10
//
// 00457f10  56                   push esi
// 00457f11  8b742408             mov esi, dword ptr [esp + 8]
// 00457f15  56                   push esi
// 00457f16  81c1e8000000         add ecx, 0xe8
// 00457f1c  e8bfeb0a00           call 0x506ae0
// 00457f21  8bc6                 mov eax, esi
// 00457f23  5e                   pop esi
// 00457f24  c20400               ret 4

struct Sub {
    void method(int);
};

struct S {
    char pad[0xe8];
    Sub sub;
    int f(int);
};

int S::f(int a)
{
    sub.method(a);
    return a;
}
