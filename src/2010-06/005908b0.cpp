// roc 2010-06 005908b0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005908b0
//
// 005908b0  b884ccb900           mov eax, 0xb9cc84
// 005908b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005908b0()
{
    return &G;
}
