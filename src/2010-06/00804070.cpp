// roc 2010-06 00804070  unit: CXTPPropExchange  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804070
//
// 00804070  b8ac05a600           mov eax, 0xa605ac
// 00804075  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00804070()
{
    return &G;
}
