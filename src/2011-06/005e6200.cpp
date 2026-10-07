// roc 2011-06 005e6200  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6200
//
// 005e6200  8b81c40c0000         mov eax, dword ptr [ecx + 0xcc4]
// 005e6206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6200 {
    char pad0[3268];
    int m_x;
    int f();
};
int S_func_005e6200::f()
{
    return m_x;
}
