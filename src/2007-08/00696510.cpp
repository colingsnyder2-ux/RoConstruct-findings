// roc 2007-08 00696510  unit: CXTPToolTipContext  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696510
//
// 00696510  b80c107d00           mov eax, 0x7d100c
// 00696515  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00696510()
{
    return &G;
}
