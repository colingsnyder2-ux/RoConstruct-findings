// roc 2007-08 006ed630  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed630
//
// 006ed630  b888af7d00           mov eax, 0x7daf88
// 006ed635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ed630()
{
    return &G;
}
