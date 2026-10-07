// roc 2007-08 004eeb00  unit: HeadBuilder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004eeb00
//
// 004eeb00  b831e74e00           mov eax, 0x4ee731
// 004eeb05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004eeb00()
{
    return &G;
}
