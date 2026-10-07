// roc 2010-06 00527710  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527710
//
// 00527710  c7410400000000       mov dword ptr [ecx + 4], 0
// 00527717  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00527710 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_00527710::f()
{
    m_x = (int)0;
}
