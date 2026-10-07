// roc 2010-06 007fc9a0  unit: CXTPControlRadioButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc9a0
//
// 007fc9a0  b8407bbe00           mov eax, 0xbe7b40
// 007fc9a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc9a0()
{
    return &G;
}
