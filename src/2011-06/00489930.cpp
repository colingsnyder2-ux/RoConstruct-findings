// roc 2011-06 00489930  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489930
//
// 00489930  b81433a700           mov eax, 0xa73314
// 00489935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00489930()
{
    return &G;
}
