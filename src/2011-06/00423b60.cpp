// roc 2011-06 00423b60  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423b60
//
// 00423b60  b80c45a600           mov eax, 0xa6450c
// 00423b65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00423b60()
{
    return &G;
}
