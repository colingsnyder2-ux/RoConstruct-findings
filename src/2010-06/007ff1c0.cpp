// roc 2010-06 007ff1c0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff1c0
//
// 007ff1c0  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 007ff1c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007ff1c0 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_007ff1c0::f()
{
    return m_x;
}
