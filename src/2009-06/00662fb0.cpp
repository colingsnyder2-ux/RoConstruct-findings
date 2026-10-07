// roc 2009-06 00662fb0  unit: RBX::LegacyController::W4InputType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662fb0
//
// 00662fb0  b8243ca100           mov eax, 0xa13c24
// 00662fb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00662fb0()
{
    return &G;
}
