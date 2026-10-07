// roc 2009-06 007b0480  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0480
//
// 007b0480  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 007b0486  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b0480 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_007b0480::f()
{
    return m_x;
}
