// roc 2012-06 004789a0  unit: CRobloxControlMaterialSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004789a0
//
// 004789a0  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 004789a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004789a0 {
    char pad0[392];
    int m_x;
    int f();
};
int S_func_004789a0::f()
{
    return m_x;
}
