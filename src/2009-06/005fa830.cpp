// roc 2009-06 005fa830  unit: RBX::VServiceProvider::?$EventDesc  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fa830
//
// 005fa830  c6417100             mov byte ptr [ecx + 0x71], 0
// 005fa834  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fa830 {
    char pad0[113];
    char m_x;
    void f();
};
void S_func_005fa830::f()
{
    m_x = (char)0;
}
