// roc 2007-08 00474f20  unit: CInstanceRecord::CNameItem  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00474f20
//
// 00474f20  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00474f23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00474f20 {
    char pad0[112];
    int m_x;
    int f();
};
int S_func_00474f20::f()
{
    return m_x;
}
