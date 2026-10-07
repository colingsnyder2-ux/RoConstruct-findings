// roc 2010-06 00419140  unit: CRBXHTMLControlSite  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419140
//
// 00419140  b8ac32a000           mov eax, 0xa032ac
// 00419145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00419140()
{
    return &G;
}
