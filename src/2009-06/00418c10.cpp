// roc 2009-06 00418c10  unit: CRBXHTMLControlSite  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418c10
//
// 00418c10  b804f98a00           mov eax, 0x8af904
// 00418c15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00418c10()
{
    return &G;
}
