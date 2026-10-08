// roc 2007-08 006854a0  unit: CXTPPropExchangeXMLNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006854a0
//
// 006854a0  b8fcf37c00           mov eax, 0x7cf3fc
// 006854a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006854a0()
{
    return &G;
}
