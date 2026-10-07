// roc 2008-06 0068ea60  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068ea60
//
// 0068ea60  8b442404             mov eax, dword ptr [esp + 4]
// 0068ea64  89817c8b0000         mov dword ptr [ecx + 0x8b7c], eax
// 0068ea6a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0068ea60 {
    char pad0[35708];
    int m_x;
    void f(int a1);
};
void S_func_0068ea60::f(int a1)
{
    m_x = (int)a1;
}
