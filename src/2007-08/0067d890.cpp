// roc 2007-08 0067d890  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d890
//
// 0067d890  b8686b8b00           mov eax, 0x8b6b68
// 0067d895  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d890()
{
    return &G;
}
