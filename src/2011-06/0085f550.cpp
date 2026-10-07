// roc 2011-06 0085f550  unit: CXTPPropExchange  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f550
//
// 0085f550  b84ca8ac00           mov eax, 0xaca84c
// 0085f555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085f550()
{
    return &G;
}
