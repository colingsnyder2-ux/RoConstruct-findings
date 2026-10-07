// roc 2011-06 00484f80  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00484f80
//
// 00484f80  b8f42ba700           mov eax, 0xa72bf4
// 00484f85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00484f80()
{
    return &G;
}
