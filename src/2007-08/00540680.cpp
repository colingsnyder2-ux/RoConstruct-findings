// roc 2007-08 00540680  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00540680
//
// 00540680  b8f0ab8900           mov eax, 0x89abf0
// 00540685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00540680()
{
    return &G;
}
