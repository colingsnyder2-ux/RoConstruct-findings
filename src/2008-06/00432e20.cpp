// from server: 100% by auto
// roc 2008-06 00432e20  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432e20
//
// 00432e20  b8b81c8100           mov eax, 0x811cb8
// 00432e25  c3                   ret 

extern char G;

char* func_00432e20()
{
    return &G;
}
