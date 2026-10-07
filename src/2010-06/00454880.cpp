// roc 2010-06 00454880  unit: CRobloxControlMaterialSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454880
//
// 00454880  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 00454886  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00454880 {
    char pad0[392];
    int m_x;
    int f();
};
int S_func_00454880::f()
{
    return m_x;
}
