// roc 2007-08 005d1a30  unit: RBX::LocalBackpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1a30
//
// 005d1a30  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 005d1a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d1a30 {
    char pad0[368];
    int m_x;
    int f();
};
int S_func_005d1a30::f()
{
    return m_x;
}
