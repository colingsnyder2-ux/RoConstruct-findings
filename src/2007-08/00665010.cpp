// roc 2007-08 00665010  unit: RBX::Reflection::Metadata::VEvents::?$Described  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00665010
//
// 00665010  b824a47c00           mov eax, 0x7ca424
// 00665015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00665010()
{
    return &G;
}
