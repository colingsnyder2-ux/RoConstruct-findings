// roc 2011-06 00932bb0  unit: Ogre::RbxSceneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00932bb0
//
// 00932bb0  b8a0f6d100           mov eax, 0xd1f6a0
// 00932bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00932bb0()
{
    return &G;
}
