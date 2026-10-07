// roc 2009-06 007ebe40  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebe40
//
// 007ebe40  b828979000           mov eax, 0x909728
// 007ebe45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007ebe40()
{
    return &G;
}
