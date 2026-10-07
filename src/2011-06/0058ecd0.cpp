// roc 2011-06 0058ecd0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ecd0
//
// 0058ecd0  b8244cc300           mov eax, 0xc34c24
// 0058ecd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058ecd0()
{
    return &G;
}
