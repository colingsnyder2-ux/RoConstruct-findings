// roc 2009-12 00838680  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838680
//
// 00838680  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00838686  83c028               add eax, 0x28
// 00838689  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0065a120@ns_ROCX00002c@@QAEHXZ)

namespace ns_ROCX00002c {
struct S_func_0065a120 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0065a120::f()
{
    return m_x + 0x28;
}
}
