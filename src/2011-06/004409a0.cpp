// roc 2011-06 004409a0  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004409a0
//
// 004409a0  b86889a600           mov eax, 0xa68968
// 004409a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004409a0()
{
    return &G;
}
