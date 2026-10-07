// roc 2008-06 00574fb0  unit: RBX::UnifiedWidget  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574fb0
//
// 00574fb0  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 00574fb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00574fb0 {
    char pad0[232];
    int m_x;
    int f();
};
int S_func_00574fb0::f()
{
    return m_x;
}
