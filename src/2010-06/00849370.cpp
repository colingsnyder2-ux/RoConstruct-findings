// roc 2010-06 00849370  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849370
//
// 00849370  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 00849376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00849370 {
    char pad0[652];
    int m_x;
    int f();
};
int S_func_00849370::f()
{
    return m_x;
}
