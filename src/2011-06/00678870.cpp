// roc 2011-06 00678870  unit: RBX::VMeshId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00678870
//
// 00678870  b810aac500           mov eax, 0xc5aa10
// 00678875  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00678870()
{
    return &G;
}
