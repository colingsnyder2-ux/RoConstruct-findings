// roc 2011-06 00424a50  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424a50
//
// 00424a50  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00424a53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00424a50 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_00424a50::f()
{
    return m_x;
}
