// roc 2008-06 007a0770  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0770
//
// 007a0770  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 007a0773  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a0770 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_007a0770::f()
{
    return m_x;
}
