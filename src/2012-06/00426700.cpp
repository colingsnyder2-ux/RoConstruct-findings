// roc 2012-06 00426700  unit: CRBXHTMLControlSite  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00426700
//
// 00426700  b8e0d8b400           mov eax, 0xb4d8e0
// 00426705  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426700()
{
    return &G;
}
