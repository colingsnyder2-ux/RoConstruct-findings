// roc 2007-08 0042ea60  unit: MyXTPCommandBars  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ea60
//
// 0042ea60  b8d4a67800           mov eax, 0x78a6d4
// 0042ea65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ea60()
{
    return &G;
}
