// roc 2010-06 00514bf0  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514bf0
//
// 00514bf0  8b81500b0000         mov eax, dword ptr [ecx + 0xb50]
// 00514bf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00514bf0 {
    char pad0[2896];
    int m_x;
    int f();
};
int S_func_00514bf0::f()
{
    return m_x;
}
