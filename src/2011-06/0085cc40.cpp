// roc 2011-06 0085cc40  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085cc40
//
// 0085cc40  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0085cc43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0085cc40 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_0085cc40::f()
{
    return m_x;
}
