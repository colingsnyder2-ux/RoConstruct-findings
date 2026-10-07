// roc 2008-06 0045ac30  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ac30
//
// 0045ac30  b810958100           mov eax, 0x819510
// 0045ac35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045ac30()
{
    return &G;
}
