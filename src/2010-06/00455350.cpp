// roc 2010-06 00455350  unit: RBX::PartInstance::W4Material::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455350
//
// 00455350  b81827b800           mov eax, 0xb82718
// 00455355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455350()
{
    return &G;
}
