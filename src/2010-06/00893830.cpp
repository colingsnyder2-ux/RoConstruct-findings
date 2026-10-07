// roc 2010-06 00893830  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893830
//
// 00893830  b808fea600           mov eax, 0xa6fe08
// 00893835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00893830()
{
    return &G;
}
