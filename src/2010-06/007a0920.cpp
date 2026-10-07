// roc 2010-06 007a0920  unit: W4_D3DFORMAT::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0920
//
// 007a0920  b8345fbe00           mov eax, 0xbe5f34
// 007a0925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a0920()
{
    return &G;
}
