// roc 2009-06 004595a0  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004595a0
//
// 004595a0  b8909e8b00           mov eax, 0x8b9e90
// 004595a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004595a0()
{
    return &G;
}
