// roc 2011-06 00592ed0  unit: RBX::Object  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592ed0
//
// 00592ed0  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00592ed3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00592ed0 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_00592ed0::f()
{
    return m_x;
}
