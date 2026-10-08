// roc 2007-08 0045bc20  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bc20
//
// 0045bc20  b8803c7900           mov eax, 0x793c80
// 0045bc25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045bc20()
{
    return &G;
}
