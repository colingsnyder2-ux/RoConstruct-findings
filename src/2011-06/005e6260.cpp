// roc 2011-06 005e6260  unit: RBX::VServiceProvider::?$EventDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6260
//
// 005e6260  8b4178               mov eax, dword ptr [ecx + 0x78]
// 005e6263  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6260 {
    char pad0[120];
    int m_x;
    int f();
};
int S_func_005e6260::f()
{
    return m_x;
}
