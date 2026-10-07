// roc 2009-06 00529ef0  unit: RBX::ViewG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00529ef0
//
// 00529ef0  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 00529ef6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00529ef0 {
    char pad0[292];
    int m_x;
    int f();
};
int S_func_00529ef0::f()
{
    return m_x;
}
