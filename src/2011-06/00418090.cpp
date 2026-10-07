// roc 2011-06 00418090  unit: boost::any::M::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418090
//
// 00418090  b8c4abc000           mov eax, 0xc0abc4
// 00418095  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00418090()
{
    return &G;
}
