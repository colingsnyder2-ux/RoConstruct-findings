// roc 2007-08 00539470  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00539470
//
// 00539470  b860288800           mov eax, 0x882860
// 00539475  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00539470()
{
    return &G;
}
