// roc 2011-06 005e6270  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6270
//
// 005e6270  8b4174               mov eax, dword ptr [ecx + 0x74]
// 005e6273  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6270 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_005e6270::f()
{
    return m_x;
}
