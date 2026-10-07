// roc 2007-08 00691900  unit: CXTThemeManagerStyleFactory  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00691900
//
// 00691900  b84c087d00           mov eax, 0x7d084c
// 00691905  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00691900()
{
    return &G;
}
