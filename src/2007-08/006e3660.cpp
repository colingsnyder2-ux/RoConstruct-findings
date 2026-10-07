// roc 2007-08 006e3660  unit: CXTColorBase  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3660
//
// 006e3660  8b4160               mov eax, dword ptr [ecx + 0x60]
// 006e3663  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e3660 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_006e3660::f()
{
    return m_x;
}
