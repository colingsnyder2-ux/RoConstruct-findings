// roc 2011-06 00874ed0  unit: CXTPToolTipContext  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874ed0
//
// 00874ed0  b828d3ac00           mov eax, 0xacd328
// 00874ed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00874ed0()
{
    return &G;
}
