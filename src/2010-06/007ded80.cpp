// roc 2010-06 007ded80  unit: CInstanceRecord  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ded80
//
// 007ded80  b8c071be00           mov eax, 0xbe71c0
// 007ded85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007ded80()
{
    return &G;
}
