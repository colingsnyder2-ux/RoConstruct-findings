// roc 2007-08 00608650  unit: RBX::ClumpStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608650
//
// 00608650  b8d0110000           mov eax, 0x11d0
// 00608655  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00608650()
{
    return 0x11d0u;
}
