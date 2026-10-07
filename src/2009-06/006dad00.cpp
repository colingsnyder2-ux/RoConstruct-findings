// roc 2009-06 006dad00  unit: RBX::AssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dad00
//
// 006dad00  b809000000           mov eax, 9
// 006dad05  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_006dad00()
{
    return 9u;
}
