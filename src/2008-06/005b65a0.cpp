// from server: 100% by auto
// roc 2008-06 005b65a0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b65a0
//
// 005b65a0  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 005b65a6  c3                   ret 

struct S_func_005b65a0 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_005b65a0::f()
{
    return m_x;
}
