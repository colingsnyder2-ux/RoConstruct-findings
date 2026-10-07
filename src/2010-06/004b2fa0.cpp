// roc 2010-06 004b2fa0  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b2fa0
//
// 004b2fa0  b844c2b700           mov eax, 0xb7c244
// 004b2fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b2fa0()
{
    return &G;
}
