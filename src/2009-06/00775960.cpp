// roc 2009-06 00775960  unit: CXTPPropExchangeXMLNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775960
//
// 00775960  b87cbe8f00           mov eax, 0x8fbe7c
// 00775965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00775960()
{
    return &G;
}
