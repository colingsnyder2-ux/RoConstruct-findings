// roc 2011-06 00414550  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414550
//
// 00414550  b834e2a500           mov eax, 0xa5e234
// 00414555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00414550()
{
    return &G;
}
