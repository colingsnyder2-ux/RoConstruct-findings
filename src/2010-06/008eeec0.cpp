// roc 2010-06 008eeec0  unit: Ogre::RbxMeshPartAdapter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008eeec0
//
// 008eeec0  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 008eeec6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008eeec0 {
    char pad0[132];
    int m_x;
    int f();
};
int S_func_008eeec0::f()
{
    return m_x;
}
