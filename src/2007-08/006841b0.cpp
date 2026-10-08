// roc 2007-08 006841b0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006841b0
//
// 006841b0  b88cf17c00           mov eax, 0x7cf18c
// 006841b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006841b0()
{
    return &G;
}
