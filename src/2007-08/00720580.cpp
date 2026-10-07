// roc 2007-08 00720580  unit: CXTWindowMap  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00720580
//
// 00720580  b874227e00           mov eax, 0x7e2274
// 00720585  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00720580()
{
    return &G;
}
