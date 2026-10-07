// roc 2010-06 008ecdd0  unit: Ogre::RbxSceneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ecdd0
//
// 008ecdd0  b8e8cac200           mov eax, 0xc2cae8
// 008ecdd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ecdd0()
{
    return &G;
}
