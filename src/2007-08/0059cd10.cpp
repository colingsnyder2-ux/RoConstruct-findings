// roc 2007-08 0059cd10  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059cd10
//
// 0059cd10  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 0059cd1a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059cd10 {
    char pad0[252];
    int m_x;
    void f();
};
void S_func_0059cd10::f()
{
    m_x = (int)0;
}
