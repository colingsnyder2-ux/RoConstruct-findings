// roc 2009-06 00420e90  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00420e90
//
// 00420e90  b80000ffff           mov eax, 0xffff0000
// 00420e95  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00420e90()
{
    return 0xffff0000u;
}
