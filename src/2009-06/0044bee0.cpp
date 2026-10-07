// roc 2009-06 0044bee0  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044bee0
//
// 0044bee0  b83c768b00           mov eax, 0x8b763c
// 0044bee5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044bee0()
{
    return &G;
}
