// roc 2007-08 00433d00  unit: CMultiPlayerPane  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00433d00
//
// 00433d00  b8a8bc7800           mov eax, 0x78bca8
// 00433d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433d00()
{
    return &G;
}
