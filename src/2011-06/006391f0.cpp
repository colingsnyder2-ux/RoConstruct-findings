// roc 2011-06 006391f0  unit: RBX::BaseScript  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006391f0
//
// 006391f0  b800cbcc00           mov eax, 0xcccb00
// 006391f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006391f0()
{
    return &G;
}
