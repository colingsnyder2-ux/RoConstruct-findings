// roc 2009-06 00460a60  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460a60
//
// 00460a60  b884ad8b00           mov eax, 0x8bad84
// 00460a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00460a60()
{
    return &G;
}
