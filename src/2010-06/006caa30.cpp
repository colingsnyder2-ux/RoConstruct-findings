// roc 2010-06 006caa30  unit: RBX::Handles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006caa30
//
// 006caa30  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 006caa36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006caa30 {
    char pad0[448];
    int m_x;
    int f();
};
int S_func_006caa30::f()
{
    return m_x;
}
