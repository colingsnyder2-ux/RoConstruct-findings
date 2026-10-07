// roc 2010-06 005fd3e0  unit: RBX::BaseScript  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fd3e0
//
// 005fd3e0  b8b09bc100           mov eax, 0xc19bb0
// 005fd3e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005fd3e0()
{
    return &G;
}
