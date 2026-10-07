// roc 2008-06 00598c10  unit: RBX::NullController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598c10
//
// 00598c10  8a81f0010000         mov al, byte ptr [ecx + 0x1f0]
// 00598c16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598c10 {
    char pad0[496];
    char m_x;
    char f();
};
char S_func_00598c10::f()
{
    return m_x;
}
