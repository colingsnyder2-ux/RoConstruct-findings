// roc 2010-06 00867bb0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00867bb0
//
// 00867bb0  8b4168               mov eax, dword ptr [ecx + 0x68]
// 00867bb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00867bb0 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_00867bb0::f()
{
    return m_x;
}
