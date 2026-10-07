// roc 2008-06 006b50c0  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b50c0
//
// 006b50c0  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006b50c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b50c0 {
    char pad0[200];
    int m_x;
    int f();
};
int S_func_006b50c0::f()
{
    return m_x;
}
