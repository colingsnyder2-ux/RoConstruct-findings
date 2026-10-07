// roc 2010-06 007f1a80  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f1a80
//
// 007f1a80  c7818401000001000000 mov dword ptr [ecx + 0x184], 1
// 007f1a8a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007f1a80 {
    char pad0[388];
    int m_x;
    void f();
};
void S_func_007f1a80::f()
{
    m_x = (int)1;
}
