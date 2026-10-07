// roc 2009-06 0077b5f0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b5f0
//
// 0077b5f0  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0077b5f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0077b5f0 {
    char pad0[112];
    int m_x;
    int f();
};
int S_func_0077b5f0::f()
{
    return m_x;
}
