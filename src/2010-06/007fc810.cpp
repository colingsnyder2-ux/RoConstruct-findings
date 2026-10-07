// roc 2010-06 007fc810  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc810
//
// 007fc810  b8b47abe00           mov eax, 0xbe7ab4
// 007fc815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc810()
{
    return &G;
}
