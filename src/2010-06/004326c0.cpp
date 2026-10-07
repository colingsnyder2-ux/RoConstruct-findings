// roc 2010-06 004326c0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004326c0
//
// 004326c0  b86475a000           mov eax, 0xa07564
// 004326c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004326c0()
{
    return &G;
}
