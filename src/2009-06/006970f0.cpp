// roc 2009-06 006970f0  unit: RBX::VirtualUser  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006970f0
//
// 006970f0  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 006970f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006970f0 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_006970f0::f()
{
    return m_x;
}
