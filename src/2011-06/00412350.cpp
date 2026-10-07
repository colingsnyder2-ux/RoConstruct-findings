// roc 2011-06 00412350  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412350
//
// 00412350  b800d1a500           mov eax, 0xa5d100
// 00412355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412350()
{
    return &G;
}
