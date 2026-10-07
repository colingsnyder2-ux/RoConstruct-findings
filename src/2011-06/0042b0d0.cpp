// roc 2011-06 0042b0d0  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042b0d0
//
// 0042b0d0  b80000ffff           mov eax, 0xffff0000
// 0042b0d5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_0042b0d0()
{
    return 0xffff0000u;
}
