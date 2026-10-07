// roc 2010-06 00421ef0  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00421ef0
//
// 00421ef0  b80000ffff           mov eax, 0xffff0000
// 00421ef5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00421ef0()
{
    return 0xffff0000u;
}
