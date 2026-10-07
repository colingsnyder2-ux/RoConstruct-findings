// roc 2011-06 006a5da0  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5da0
//
// 006a5da0  8b81f8020000         mov eax, dword ptr [ecx + 0x2f8]
// 006a5da6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5da0 {
    char pad0[760];
    int m_x;
    int f();
};
int S_func_006a5da0::f()
{
    return m_x;
}
