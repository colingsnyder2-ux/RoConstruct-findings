// roc 2008-06 006a6ee0  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6ee0
//
// 006a6ee0  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 006a6ee6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6ee0 {
    char pad0[312];
    int m_x;
    int f();
};
int S_func_006a6ee0::f()
{
    return m_x;
}
