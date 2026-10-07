// roc 2008-06 00426640  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426640
//
// 00426640  b80000ffff           mov eax, 0xffff0000
// 00426645  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00426640()
{
    return 0xffff0000u;
}
