// roc 2012-06 00464d50  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d50
//
// 00464d50  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00464d53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d50 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_00464d50::f()
{
    return m_x;
}
