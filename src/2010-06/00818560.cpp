// roc 2010-06 00818560  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818560
//
// 00818560  b8102ca600           mov eax, 0xa62c10
// 00818565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818560()
{
    return &G;
}
