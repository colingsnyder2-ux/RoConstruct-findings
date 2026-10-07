// roc 2008-06 0059ef20  unit: RBX::VMeshId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ef20
//
// 0059ef20  b868b39400           mov eax, 0x94b368
// 0059ef25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0059ef20()
{
    return &G;
}
