// roc 2007-08 0041d7e0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d7e0
//
// 0041d7e0  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0041d7e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041d7e0 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_0041d7e0::f()
{
    return m_x;
}
