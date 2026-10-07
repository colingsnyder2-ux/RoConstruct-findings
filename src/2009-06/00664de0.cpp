// roc 2009-06 00664de0  unit: RBX::ExtrudedPartInstance  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00664de0
//
// 00664de0  b8584aa100           mov eax, 0xa14a58
// 00664de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00664de0()
{
    return &G;
}
