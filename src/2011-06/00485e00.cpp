// roc 2011-06 00485e00  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00485e00
//
// 00485e00  b8b02ea700           mov eax, 0xa72eb0
// 00485e05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00485e00()
{
    return &G;
}
