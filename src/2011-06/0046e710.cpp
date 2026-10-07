// roc 2011-06 0046e710  unit: RBX::PartInstance::W4Material::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046e710
//
// 0046e710  b84053c100           mov eax, 0xc15340
// 0046e715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046e710()
{
    return &G;
}
