// roc 2007-08 006733c0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006733c0
//
// 006733c0  c7817801000001000000 mov dword ptr [ecx + 0x178], 1
// 006733ca  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006733c0 {
    char pad0[376];
    int m_x;
    void f();
};
void S_func_006733c0::f()
{
    m_x = (int)1;
}
