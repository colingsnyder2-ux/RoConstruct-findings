// roc 2010-06 0041ac30  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ac30
//
// 0041ac30  b8f037a000           mov eax, 0xa037f0
// 0041ac35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041ac30()
{
    return &G;
}
