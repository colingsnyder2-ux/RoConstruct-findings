// roc 2008-06 005b6590  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6590
//
// 005b6590  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 005b6596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b6590 {
    char pad0[368];
    int m_x;
    int f();
};
int S_func_005b6590::f()
{
    return m_x;
}
