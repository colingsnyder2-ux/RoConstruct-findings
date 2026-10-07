// roc 2012-06 00428460  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428460
//
// 00428460  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00428463  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00428460 {
    char pad0[112];
    int m_x;
    int f();
};
int S_func_00428460::f()
{
    return m_x;
}
