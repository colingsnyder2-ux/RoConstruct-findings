// roc 2009-12 008114d0  unit: CXTPToolBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008114d0
//
// 008114d0  8b442404             mov eax, dword ptr [esp + 4]
// 008114d4  8981ec000000         mov dword ptr [ecx + 0xec], eax
// 008114da  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0073a3d0@ns_ROCX000067@@QAEXH@Z)

namespace ns_ROCX000067 {
struct S_func_0073a3d0 {
    char pad0[236];
    int m_x;
    void f(int a1);
};
void S_func_0073a3d0::f(int a1)
{
    m_x = (int)a1;
}
}
