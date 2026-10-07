// roc 2007-08 006dc0d0  unit: CXTPDockingPaneWindowSelect  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc0d0
//
// 006dc0d0  b804947d00           mov eax, 0x7d9404
// 006dc0d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dc0d0()
{
    return &G;
}
