// roc 2011-06 006a5db0  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5db0
//
// 006a5db0  8a81f6020000         mov al, byte ptr [ecx + 0x2f6]
// 006a5db6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5db0 {
    char pad0[758];
    char m_x;
    char f();
};
char S_func_006a5db0::f()
{
    return m_x;
}
