// roc 2012-06 00464d40  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d40
//
// 00464d40  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00464d43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d40 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_00464d40::f()
{
    return m_x;
}
