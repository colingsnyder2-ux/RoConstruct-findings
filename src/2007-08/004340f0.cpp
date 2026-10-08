// roc 2007-08 004340f0  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004340f0
//
// 004340f0  b814c37800           mov eax, 0x78c314
// 004340f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004340f0()
{
    return &G;
}
