// roc 2011-06 007ec770  unit: RBX::AssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec770
//
// 007ec770  b809000000           mov eax, 9
// 007ec775  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_007ec770()
{
    return 9u;
}
