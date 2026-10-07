// roc 2011-06 006c93f0  unit: RBX::TextLabel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c93f0
//
// 006c93f0  8a81a0020000         mov al, byte ptr [ecx + 0x2a0]
// 006c93f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c93f0 {
    char pad0[672];
    char m_x;
    char f();
};
char S_func_006c93f0::f()
{
    return m_x;
}
