// roc 2011-06 0046daa0  unit: CRobloxControlMaterialSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046daa0
//
// 0046daa0  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0046daa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0046daa0 {
    char pad0[392];
    int m_x;
    int f();
};
int S_func_0046daa0::f()
{
    return m_x;
}
