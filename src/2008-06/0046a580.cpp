// roc 2008-06 0046a580  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a580
//
// 0046a580  b8a8c48100           mov eax, 0x81c4a8
// 0046a585  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046a580()
{
    return &G;
}
