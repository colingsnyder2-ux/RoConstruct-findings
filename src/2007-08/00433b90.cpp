// roc 2007-08 00433b90  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433b90
//
// 00433b90  b848bb7800           mov eax, 0x78bb48
// 00433b95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433b90()
{
    return &G;
}
