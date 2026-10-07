// roc 2008-06 006fcff0  unit: CXTPPropExchangeXMLNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcff0
//
// 006fcff0  b824ae8500           mov eax, 0x85ae24
// 006fcff5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fcff0()
{
    return &G;
}
