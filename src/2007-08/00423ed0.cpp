// roc 2007-08 00423ed0  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00423ed0
//
// 00423ed0  b80000ffff           mov eax, 0xffff0000
// 00423ed5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00423ed0()
{
    return 0xffff0000u;
}
