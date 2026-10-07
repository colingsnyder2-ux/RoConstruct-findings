// roc 2009-06 00792370  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792370
//
// 00792370  b8ecfe8f00           mov eax, 0x8ffeec
// 00792375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00792370()
{
    return &G;
}
