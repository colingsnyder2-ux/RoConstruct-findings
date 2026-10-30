// roc 2009-12 005cee60  unit: RBX::PartChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cee60
//
// 005cee60  8b442404             mov eax, dword ptr [esp + 4]
// 005cee64  d9442408             fld dword ptr [esp + 8]
// 005cee68  51                   push ecx
// 005cee69  8b4808               mov ecx, dword ptr [eax + 8]
// 005cee6c  d91c24               fstp dword ptr [esp]
// 005cee6f  034804               add ecx, dword ptr [eax + 4]
// 005cee72  8b00                 mov eax, dword ptr [eax]
// 005cee74  ffd0                 call eax
// 005cee76  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000007@@QAAXM@Z)

namespace ns_ROCX000007 {
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
}
