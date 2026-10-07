// roc 2009-06 00480ec0  unit: Ogre::StaticGeometryFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480ec0
//
// 00480ec0  b844c6a300           mov eax, 0xa3c644
// 00480ec5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00480ec0()
{
    return &G;
}
