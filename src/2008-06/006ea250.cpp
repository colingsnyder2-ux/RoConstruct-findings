// roc 2008-06 006ea250  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea250
//
// 006ea250  c7818401000001000000 mov dword ptr [ecx + 0x184], 1
// 006ea25a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ea250 {
    char pad0[388];
    int m_x;
    void f();
};
void S_func_006ea250::f()
{
    m_x = (int)1;
}
