// roc 2009-12 00838670  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838670
//
// 00838670  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00838676  83c044               add eax, 0x44
// 00838679  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0065a110@ns_ROCX00002b@@QAEHXZ)

namespace ns_ROCX00002b {
struct S_func_0065a110 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0065a110::f()
{
    return m_x + 0x44;
}
}
