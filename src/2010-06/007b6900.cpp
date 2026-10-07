// roc 2010-06 007b6900  unit: CXTPControlEditCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b6900
//
// 007b6900  b82c6ba500           mov eax, 0xa56b2c
// 007b6905  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b6900()
{
    return &G;
}
