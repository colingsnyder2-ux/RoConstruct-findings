// roc 2009-12 00696920  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696920
//
// 00696920  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 00696926  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00602000@ns_ROCX000068@@QAEHXZ)

namespace ns_ROCX000068 {
struct S_func_00602000 {
    char pad0[524];
    int m_x;
    int f();
};
int S_func_00602000::f()
{
    return m_x;
}
}
