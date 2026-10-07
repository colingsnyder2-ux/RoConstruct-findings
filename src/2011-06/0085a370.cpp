// roc 2011-06 0085a370  unit: CXTPControlCheckBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a370
//
// 0085a370  b8b471c900           mov eax, 0xc971b4
// 0085a375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a370()
{
    return &G;
}
