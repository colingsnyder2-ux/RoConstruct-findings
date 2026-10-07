// roc 2008-06 006fa3f0  unit: RBX::AssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa3f0
//
// 006fa3f0  b804000000           mov eax, 4
// 006fa3f5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_006fa3f0()
{
    return 4u;
}
