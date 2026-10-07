// roc 2011-06 00430050  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430050
//
// 00430050  b8a458a600           mov eax, 0xa658a4
// 00430055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430050()
{
    return &G;
}
