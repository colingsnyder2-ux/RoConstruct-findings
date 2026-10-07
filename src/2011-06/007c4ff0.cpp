// roc 2011-06 007c4ff0  unit: RBX::PolyContact  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c4ff0
//
// 007c4ff0  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 007c4ff6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c4ff0 {
    char pad0[204];
    int m_x;
    int f();
};
int S_func_007c4ff0::f()
{
    return m_x;
}
