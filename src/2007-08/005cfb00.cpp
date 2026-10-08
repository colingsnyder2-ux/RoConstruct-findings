// roc 2007-08 005cfb00  unit: RBX::Kernel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cfb00
//
// 005cfb00  b808000000           mov eax, 8
// 005cfb05  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_005cfb00()
{
    return 8u;
}
