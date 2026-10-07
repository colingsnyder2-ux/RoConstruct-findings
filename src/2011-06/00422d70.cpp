// roc 2011-06 00422d70  unit: CRBXHTMLControlSite  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00422d70
//
// 00422d70  b81443a600           mov eax, 0xa64314
// 00422d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00422d70()
{
    return &G;
}
