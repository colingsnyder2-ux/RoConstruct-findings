// roc 2007-08 0042b4c0  unit: CLuaHtmlView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b4c0
//
// 0042b4c0  b880a27800           mov eax, 0x78a280
// 0042b4c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042b4c0()
{
    return &G;
}
