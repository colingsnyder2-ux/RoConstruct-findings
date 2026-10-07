// roc 2011-06 00818de0  unit: CXTPControlEditCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00818de0
//
// 00818de0  b88c27ac00           mov eax, 0xac278c
// 00818de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818de0()
{
    return &G;
}
