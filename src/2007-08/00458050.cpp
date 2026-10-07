// roc 2007-08 00458050  unit: CRobloxWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00458050
//
// 00458050  b858317900           mov eax, 0x793158
// 00458055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00458050()
{
    return &G;
}
