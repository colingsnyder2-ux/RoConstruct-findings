// roc 2007-08 0064ea60  unit: CXTPToolBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ea60
//
// 0064ea60  b8f4578b00           mov eax, 0x8b57f4
// 0064ea65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0064ea60()
{
    return &G;
}
