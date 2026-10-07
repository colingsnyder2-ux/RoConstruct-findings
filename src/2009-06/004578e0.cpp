// roc 2009-06 004578e0  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004578e0
//
// 004578e0  b8389a8b00           mov eax, 0x8b9a38
// 004578e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004578e0()
{
    return &G;
}
