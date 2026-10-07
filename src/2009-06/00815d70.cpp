// roc 2009-06 00815d70  unit: CXTPRibbonControlSystemButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815d70
//
// 00815d70  b8a0aba200           mov eax, 0xa2aba0
// 00815d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00815d70()
{
    return &G;
}
