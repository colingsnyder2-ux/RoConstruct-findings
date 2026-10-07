// roc 2009-06 00762bb0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00762bb0
//
// 00762bb0  c7818401000001000000 mov dword ptr [ecx + 0x184], 1
// 00762bba  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00762bb0 {
    char pad0[388];
    int m_x;
    void f();
};
void S_func_00762bb0::f()
{
    m_x = (int)1;
}
