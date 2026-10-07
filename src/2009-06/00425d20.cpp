// roc 2009-06 00425d20  unit: boost::any::M::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425d20
//
// 00425d20  b8e8f29d00           mov eax, 0x9df2e8
// 00425d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00425d20()
{
    return &G;
}
