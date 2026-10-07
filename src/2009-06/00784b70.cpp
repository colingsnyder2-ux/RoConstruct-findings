// roc 2009-06 00784b70  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784b70
//
// 00784b70  b8fcd78f00           mov eax, 0x8fd7fc
// 00784b75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00784b70()
{
    return &G;
}
