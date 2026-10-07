// roc 2007-08 0040a7d0  unit: CPlayBrowserView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a7d0
//
// 0040a7d0  b868557800           mov eax, 0x785568
// 0040a7d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a7d0()
{
    return &G;
}
