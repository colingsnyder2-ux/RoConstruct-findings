// roc 2009-06 00525d70  unit: RBX::ViewRbxGfx  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525d70
//
// 00525d70  8b4908               mov ecx, dword ptr [ecx + 8]
// 00525d73  d9442408             fld dword ptr [esp + 8]
// 00525d77  8b01                 mov eax, dword ptr [ecx]
// 00525d79  8b542404             mov edx, dword ptr [esp + 4]
// 00525d7d  8b4008               mov eax, dword ptr [eax + 8]
// 00525d80  51                   push ecx
// 00525d81  d91c24               fstp dword ptr [esp]
// 00525d84  52                   push edx
// 00525d85  ffd0                 call eax
// 00525d87  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_005751c0@ns_ROCX00000e@@QAEXHM@Z)

namespace ns_ROCX00000e {
// from server: 100% by atomic.potato
struct S_func_005751c0
{
    char pad0[8];
    struct VTable
    {
        int pad0[2];
        void (__thiscall *f)(void *, int, float);
    };
    VTable **m_vtable;
    void f(int a, float b);
};

void S_func_005751c0::f(int a, float b)
{
    m_vtable[0]->f(m_vtable, a, b);
}
}
