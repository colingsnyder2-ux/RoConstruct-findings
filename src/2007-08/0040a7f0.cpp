// roc 2007-08 0040a7f0  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a7f0
//
// 0040a7f0  b884557800           mov eax, 0x785584
// 0040a7f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a7f0()
{
    return &G;
}
