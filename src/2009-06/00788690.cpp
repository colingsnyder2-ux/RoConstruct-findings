// roc 2009-06 00788690  unit: CXTPToolTipContext  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00788690
//
// 00788690  b8d8e28f00           mov eax, 0x8fe2d8
// 00788695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00788690()
{
    return &G;
}
