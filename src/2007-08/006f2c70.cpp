// roc 2007-08 006f2c70  unit: CXTPGraphicBitmapPng  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2c70
//
// 006f2c70  b830b87d00           mov eax, 0x7db830
// 006f2c75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f2c70()
{
    return &G;
}
