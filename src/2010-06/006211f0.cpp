// roc 2010-06 006211f0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006211f0
//
// 006211f0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006211f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006211f0 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_006211f0::f()
{
    return m_x;
}
