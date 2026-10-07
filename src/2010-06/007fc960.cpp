// roc 2010-06 007fc960  unit: CXTPControlCheckBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc960
//
// 007fc960  b8247bbe00           mov eax, 0xbe7b24
// 007fc965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc960()
{
    return &G;
}
