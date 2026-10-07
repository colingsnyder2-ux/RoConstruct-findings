// roc 2009-06 0041a8e0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a8e0
//
// 0041a8e0  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0041a8e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041a8e0 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_0041a8e0::f()
{
    return m_x;
}
