// roc 2007-08 00720830  unit: CXTButtonThemeFactory  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00720830
//
// 00720830  b8e8227e00           mov eax, 0x7e22e8
// 00720835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00720830()
{
    return &G;
}
