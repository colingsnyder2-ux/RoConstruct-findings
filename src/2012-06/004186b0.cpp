// roc 2012-06 004186b0  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004186b0
//
// 004186b0  b80869b400           mov eax, 0xb46908
// 004186b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004186b0()
{
    return &G;
}
