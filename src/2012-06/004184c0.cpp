// roc 2012-06 004184c0  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004184c0
//
// 004184c0  b82867b400           mov eax, 0xb46728
// 004184c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004184c0()
{
    return &G;
}
