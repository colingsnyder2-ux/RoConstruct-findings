// roc 2007-08 00608630  unit: RBX::ClumpStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608630
//
// 00608630  b813000000           mov eax, 0x13
// 00608635  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00608630()
{
    return 0x13u;
}
