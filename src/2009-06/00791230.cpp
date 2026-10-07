// roc 2009-06 00791230  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791230
//
// 00791230  b880fb8f00           mov eax, 0x8ffb80
// 00791235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00791230()
{
    return &G;
}
