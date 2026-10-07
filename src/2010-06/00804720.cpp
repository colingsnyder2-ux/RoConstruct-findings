// roc 2010-06 00804720  unit: CXTPPropExchangeXMLNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804720
//
// 00804720  b8e405a600           mov eax, 0xa605e4
// 00804725  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00804720()
{
    return &G;
}
