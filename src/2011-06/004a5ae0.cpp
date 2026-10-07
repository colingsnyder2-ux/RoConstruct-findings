// roc 2011-06 004a5ae0  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5ae0
//
// 004a5ae0  b808a2c100           mov eax, 0xc1a208
// 004a5ae5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5ae0()
{
    return &G;
}
