// roc 2009-06 00774620  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00774620
//
// 00774620  b8dcbb8f00           mov eax, 0x8fbbdc
// 00774625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00774620()
{
    return &G;
}
