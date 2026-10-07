// roc 2008-06 005fd3b0  unit: RBX::LocalBackpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd3b0
//
// 005fd3b0  8b81c4010000         mov eax, dword ptr [ecx + 0x1c4]
// 005fd3b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fd3b0 {
    char pad0[452];
    int m_x;
    int f();
};
int S_func_005fd3b0::f()
{
    return m_x;
}
