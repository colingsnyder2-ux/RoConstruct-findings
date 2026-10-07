// roc 2010-06 00565440  unit: seg_00560000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565440
//
// 00565440  b86000a200           mov eax, 0xa20060
// 00565445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00565440()
{
    return &G;
}
