// roc 2010-06 00426e30  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426e30
//
// 00426e30  b82cc2b700           mov eax, 0xb7c22c
// 00426e35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426e30()
{
    return &G;
}
