// roc 2008-06 006fbca0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fbca0
//
// 006fbca0  b884ab8500           mov eax, 0x85ab84
// 006fbca5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fbca0()
{
    return &G;
}
