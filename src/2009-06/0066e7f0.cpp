// roc 2009-06 0066e7f0  unit: RBX::VMeshId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e7f0
//
// 0066e7f0  b88064a100           mov eax, 0xa16480
// 0066e7f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0066e7f0()
{
    return &G;
}
