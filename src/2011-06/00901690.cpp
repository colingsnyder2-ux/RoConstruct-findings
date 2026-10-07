// roc 2011-06 00901690  unit: CXTButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901690
//
// 00901690  b874e2ad00           mov eax, 0xade274
// 00901695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00901690()
{
    return &G;
}
