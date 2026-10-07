// roc 2007-08 00675f70  unit: CXTPCustomizeOptionsPage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00675f70
//
// 00675f70  b858ca7c00           mov eax, 0x7cca58
// 00675f75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00675f70()
{
    return &G;
}
