// roc 2010-06 00430a90  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430a90
//
// 00430a90  b8ec6fa000           mov eax, 0xa06fec
// 00430a95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430a90()
{
    return &G;
}
