// roc 2009-06 0042c970  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c970
//
// 0042c970  b8702a8b00           mov eax, 0x8b2a70
// 0042c975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c970()
{
    return &G;
}
