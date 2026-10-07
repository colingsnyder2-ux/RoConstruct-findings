// roc 2012-06 00449370  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449370
//
// 00449370  b88824b500           mov eax, 0xb52488
// 00449375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449370()
{
    return &G;
}
