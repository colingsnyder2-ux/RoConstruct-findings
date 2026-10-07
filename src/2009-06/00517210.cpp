// roc 2009-06 00517210  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517210
//
// 00517210  c7410400000000       mov dword ptr [ecx + 4], 0
// 00517217  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00517210 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_00517210::f()
{
    m_x = (int)0;
}
