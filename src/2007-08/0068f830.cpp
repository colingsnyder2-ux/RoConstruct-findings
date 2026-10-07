// roc 2007-08 0068f830  unit: CXTPDockingPane  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f830
//
// 0068f830  b848047d00           mov eax, 0x7d0448
// 0068f835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0068f830()
{
    return &G;
}
