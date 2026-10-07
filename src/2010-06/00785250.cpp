// roc 2010-06 00785250  unit: RBX::AssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785250
//
// 00785250  b809000000           mov eax, 9
// 00785255  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00785250()
{
    return 9u;
}
