// roc 2007-08 0040f230  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f230
//
// 0040f230  b8a06c7800           mov eax, 0x786ca0
// 0040f235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040f230()
{
    return &G;
}
