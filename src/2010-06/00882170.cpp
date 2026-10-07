// roc 2010-06 00882170  unit: CXTPTabManagerItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882170
//
// 00882170  b874e9a600           mov eax, 0xa6e974
// 00882175  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00882170()
{
    return &G;
}
