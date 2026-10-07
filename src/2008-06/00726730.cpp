// roc 2008-06 00726730  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00726730
//
// 00726730  b828158600           mov eax, 0x861528
// 00726735  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00726730()
{
    return &G;
}
