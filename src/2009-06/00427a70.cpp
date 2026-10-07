// roc 2009-06 00427a70  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427a70
//
// 00427a70  b8700d8b00           mov eax, 0x8b0d70
// 00427a75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00427a70()
{
    return &G;
}
