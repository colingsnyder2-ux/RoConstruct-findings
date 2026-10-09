// roc 2009-12 0063a7e0  unit: RBX::VRunService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063a7e0
//
// 0063a7e0  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 0063a7e6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004d4ee0@ns_ROCX00002b@@QAEHXZ)

namespace ns_ROCX00002b {
struct S_func_004d4ee0 {
    char pad0[152];
    int m_x;
    int f();
};
int S_func_004d4ee0::f()
{
    return m_x;
}
}
