// roc 2008-06 006a6f00  unit: CXTPPopupBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6f00
//
// 006a6f00  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 006a6f06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6f00 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_006a6f00::f()
{
    return m_x;
}
