// roc 2007-08 006c6b60  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6b60
//
// 006c6b60  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 006c6b66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c6b60 {
    char pad0[388];
    int m_x;
    int f();
};
int S_func_006c6b60::f()
{
    return m_x;
}
