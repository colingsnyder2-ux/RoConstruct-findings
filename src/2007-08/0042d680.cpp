// roc 2007-08 0042d680  unit: boost::any::M::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d680
//
// 0042d680  b8ec278800           mov eax, 0x8827ec
// 0042d685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042d680()
{
    return &G;
}
