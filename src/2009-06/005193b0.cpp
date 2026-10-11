// from server: 100% by tester
// roc 2009-06 005193b0  unit: RBX::PartChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005193b0
//
// 005193b0  8b442404             mov eax, dword ptr [esp + 4]
// 005193b4  d9442408             fld dword ptr [esp + 8]
// 005193b8  51                   push ecx
// 005193b9  8b4808               mov ecx, dword ptr [eax + 8]
// 005193bc  d91c24               fstp dword ptr [esp]
// 005193bf  034804               add ecx, dword ptr [eax + 4]
// 005193c2  8b00                 mov eax, dword ptr [eax]
// 005193c4  ffd0                 call eax
// 005193c6  c3                   ret 

struct S
{
    void __cdecl f(float);
};

void __cdecl S::f(float value)
{
    struct V
    {
        void (__thiscall *call)(V *, float);
        int a;
        int b;
    };

    V *v = (V *)((char *)this);
    int ecx_value = v->b + v->a;
    ((void (__thiscall *)(V *, float))v->call)((V *)ecx_value, value);
}
