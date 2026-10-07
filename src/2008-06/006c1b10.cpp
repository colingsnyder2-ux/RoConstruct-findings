// roc 2008-06 006c1b10  unit: CXTPToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1b10
//
// 006c1b10  b8d0639600           mov eax, 0x9663d0
// 006c1b15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c1b10()
{
    return &G;
}
