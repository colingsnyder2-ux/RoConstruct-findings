// roc 2008-06 006edf80  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006edf80
//
// 006edf80  b874888500           mov eax, 0x858874
// 006edf85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006edf80()
{
    return &G;
}
