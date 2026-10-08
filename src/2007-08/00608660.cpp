// roc 2007-08 00608660  unit: RBX::ClumpStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608660
//
// 00608660  b898000000           mov eax, 0x98
// 00608665  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00608660()
{
    return 0x98u;
}
