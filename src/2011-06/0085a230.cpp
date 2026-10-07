// roc 2011-06 0085a230  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a230
//
// 0085a230  b84471c900           mov eax, 0xc97144
// 0085a235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a230()
{
    return &G;
}
