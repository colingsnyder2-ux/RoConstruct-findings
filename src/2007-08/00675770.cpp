// roc 2007-08 00675770  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675770
//
// 00675770  b864c27c00           mov eax, 0x7cc264
// 00675775  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00675770()
{
    return &G;
}
