// roc 2009-06 0042f440  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f440
//
// 0042f440  b868348b00           mov eax, 0x8b3468
// 0042f445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042f440()
{
    return &G;
}
