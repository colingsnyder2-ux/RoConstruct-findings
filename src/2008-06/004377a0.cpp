// roc 2008-06 004377a0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004377a0
//
// 004377a0  b8dc348100           mov eax, 0x8134dc
// 004377a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004377a0()
{
    return &G;
}
