// roc 2007-08 004ef780  unit: RBX::Render::VMaterial::?$WeakReferenceCountedPointer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef780
//
// 004ef780  c7410400000000       mov dword ptr [ecx + 4], 0
// 004ef787  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004ef780 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_004ef780::f()
{
    m_x = (int)0;
}
