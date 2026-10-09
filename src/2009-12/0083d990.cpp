// roc 2009-12 0083d990  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d990
//
// 0083d990  c7818401000001000000 mov dword ptr [ecx + 0x184], 1
// 0083d99a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00762bb0@ns_ROCX00006d@@QAEXXZ)

namespace ns_ROCX00006d {
struct S_func_00762bb0 {
    char pad0[388];
    int m_x;
    void f();
};
void S_func_00762bb0::f()
{
    m_x = (int)1;
}
}
