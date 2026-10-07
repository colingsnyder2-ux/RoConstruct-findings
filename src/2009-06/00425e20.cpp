// roc 2009-06 00425e20  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425e20
//
// 00425e20  b8dcf29d00           mov eax, 0x9df2dc
// 00425e25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00425e20()
{
    return &G;
}
