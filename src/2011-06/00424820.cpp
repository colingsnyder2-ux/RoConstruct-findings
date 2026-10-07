// roc 2011-06 00424820  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424820
//
// 00424820  b83448a600           mov eax, 0xa64834
// 00424825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00424820()
{
    return &G;
}
