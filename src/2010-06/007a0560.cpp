// roc 2010-06 007a0560  unit: W4_D3DDEVTYPE::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0560
//
// 007a0560  b8ac5ebe00           mov eax, 0xbe5eac
// 007a0565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a0560()
{
    return &G;
}
