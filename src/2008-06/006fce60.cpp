// roc 2008-06 006fce60  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fce60
//
// 006fce60  b808ae8500           mov eax, 0x85ae08
// 006fce65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fce60()
{
    return &G;
}
