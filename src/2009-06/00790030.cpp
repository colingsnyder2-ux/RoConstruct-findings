// roc 2009-06 00790030  unit: CXTPPropertyGridItemEnum  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00790030
//
// 00790030  b84cf38f00           mov eax, 0x8ff34c
// 00790035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00790030()
{
    return &G;
}
