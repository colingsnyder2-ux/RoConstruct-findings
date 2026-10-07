// roc 2008-06 00420930  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420930
//
// 00420930  8b4168               mov eax, dword ptr [ecx + 0x68]
// 00420933  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00420930 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_00420930::f()
{
    return m_x;
}
