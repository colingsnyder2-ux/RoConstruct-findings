// roc 2008-06 006c6890  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6890
//
// 006c6890  b868318500           mov eax, 0x853168
// 006c6895  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c6890()
{
    return &G;
}
