// roc 2009-06 00473660  unit: Ogre::RbxSceneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473660
//
// 00473660  b840c5a300           mov eax, 0xa3c540
// 00473665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00473660()
{
    return &G;
}
