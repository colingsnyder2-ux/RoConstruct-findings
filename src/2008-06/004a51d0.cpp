// roc 2008-06 004a51d0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a51d0
//
// 004a51d0  c70100000000         mov dword ptr [ecx], 0
// 004a51d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a51d0 {
    int m_x;
    void f();
};
void S_func_004a51d0::f()
{
    m_x = (int)0;
}
