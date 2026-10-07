// roc 2008-06 006fc940  unit: CXTPPropExchange  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc940
//
// 006fc940  b8ecad8500           mov eax, 0x85adec
// 006fc945  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fc940()
{
    return &G;
}
