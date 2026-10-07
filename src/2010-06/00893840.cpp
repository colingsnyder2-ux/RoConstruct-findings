// roc 2010-06 00893840  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893840
//
// 00893840  b888fea600           mov eax, 0xa6fe88
// 00893845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00893840()
{
    return &G;
}
