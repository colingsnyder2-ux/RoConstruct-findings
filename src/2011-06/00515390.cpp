// roc 2011-06 00515390  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00515390
//
// 00515390  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 00515396  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00515390 {
    char pad0[312];
    int m_x;
    int f();
};
int S_func_00515390::f()
{
    return m_x;
}
