// roc 2009-06 00454030  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454030
//
// 00454030  b8348b8b00           mov eax, 0x8b8b34
// 00454035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454030()
{
    return &G;
}
