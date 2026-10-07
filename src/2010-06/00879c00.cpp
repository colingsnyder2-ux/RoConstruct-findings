// roc 2010-06 00879c00  unit: CXTPControlCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879c00
//
// 00879c00  b88ca9be00           mov eax, 0xbea98c
// 00879c05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00879c00()
{
    return &G;
}
