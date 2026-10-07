// roc 2010-06 004303d0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004303d0
//
// 004303d0  b8046fa000           mov eax, 0xa06f04
// 004303d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004303d0()
{
    return &G;
}
