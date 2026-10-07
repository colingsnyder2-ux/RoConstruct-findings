// roc 2012-06 0042fae0  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042fae0
//
// 0042fae0  b80000ffff           mov eax, 0xffff0000
// 0042fae5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_0042fae0()
{
    return 0xffff0000u;
}
