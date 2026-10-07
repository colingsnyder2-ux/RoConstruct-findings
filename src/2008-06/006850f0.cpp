// roc 2008-06 006850f0  unit: Ogre::RbxSubEntity  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006850f0
//
// 006850f0  8b442404             mov eax, dword ptr [esp + 4]
// 006850f4  898134010000         mov dword ptr [ecx + 0x134], eax
// 006850fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006850f0 {
    char pad0[308];
    int m_x;
    void f(int a1);
};
void S_func_006850f0::f(int a1)
{
    m_x = (int)a1;
}
