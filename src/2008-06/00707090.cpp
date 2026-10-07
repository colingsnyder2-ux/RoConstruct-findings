// roc 2008-06 00707090  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707090
//
// 00707090  b874be8500           mov eax, 0x85be74
// 00707095  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00707090()
{
    return &G;
}
