// roc 2008-06 004f08b0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f08b0
//
// 004f08b0  c7410400000000       mov dword ptr [ecx + 4], 0
// 004f08b7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f08b0 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_004f08b0::f()
{
    m_x = (int)0;
}
