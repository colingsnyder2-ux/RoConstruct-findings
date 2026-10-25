// from server: 100% by auto
// roc 2008-06 00432fa0  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432fa0
//
// 00432fa0  b8201e8100           mov eax, 0x811e20
// 00432fa5  c3                   ret 

extern char G;

char* func_00432fa0()
{
    return &G;
}
