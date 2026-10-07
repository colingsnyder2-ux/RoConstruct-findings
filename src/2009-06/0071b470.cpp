// roc 2009-06 0071b470  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b470
//
// 0071b470  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 0071b476  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071b470 {
    char pad0[312];
    int m_x;
    int f();
};
int S_func_0071b470::f()
{
    return m_x;
}
