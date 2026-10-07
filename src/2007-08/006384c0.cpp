// roc 2007-08 006384c0  unit: CXTPControlEditCtrl  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006384c0
//
// 006384c0  b8f85f7c00           mov eax, 0x7c5ff8
// 006384c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006384c0()
{
    return &G;
}
