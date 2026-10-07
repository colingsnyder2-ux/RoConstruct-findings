// roc 2010-06 00433530  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00433530
//
// 00433530  b81876a000           mov eax, 0xa07618
// 00433535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433530()
{
    return &G;
}
