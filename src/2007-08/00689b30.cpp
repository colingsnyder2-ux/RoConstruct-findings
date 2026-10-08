// roc 2007-08 00689b30  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689b30
//
// 00689b30  b880f77c00           mov eax, 0x7cf780
// 00689b35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00689b30()
{
    return &G;
}
