// roc 2011-06 005c3dc0  unit: RBX::LegacyController::W4InputType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3dc0
//
// 005c3dc0  b8dcd8c300           mov eax, 0xc3d8dc
// 005c3dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c3dc0()
{
    return &G;
}
