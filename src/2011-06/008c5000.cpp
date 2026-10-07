// roc 2011-06 008c5000  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5000
//
// 008c5000  8b4168               mov eax, dword ptr [ecx + 0x68]
// 008c5003  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008c5000 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_008c5000::f()
{
    return m_x;
}
