// roc 2010-06 0041a280  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041a280
//
// 0041a280  b82436a000           mov eax, 0xa03624
// 0041a285  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041a280()
{
    return &G;
}
