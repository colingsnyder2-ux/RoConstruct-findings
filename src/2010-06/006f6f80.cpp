// roc 2010-06 006f6f80  unit: RBX::VGuiService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f6f80
//
// 006f6f80  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 006f6f86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f6f80 {
    char pad0[368];
    int m_x;
    int f();
};
int S_func_006f6f80::f()
{
    return m_x;
}
