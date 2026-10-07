// roc 2007-08 0040a7c0  unit: CIDEBrowserView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a7c0
//
// 0040a7c0  b84c557800           mov eax, 0x78554c
// 0040a7c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a7c0()
{
    return &G;
}
