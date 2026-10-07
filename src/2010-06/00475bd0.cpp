// roc 2010-06 00475bd0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00475bd0
//
// 00475bd0  b8e41ca100           mov eax, 0xa11ce4
// 00475bd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00475bd0()
{
    return &G;
}
