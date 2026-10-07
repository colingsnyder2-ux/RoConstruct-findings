// roc 2012-06 0048aee0  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048aee0
//
// 0048aee0  b838cab500           mov eax, 0xb5ca38
// 0048aee5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048aee0()
{
    return &G;
}
