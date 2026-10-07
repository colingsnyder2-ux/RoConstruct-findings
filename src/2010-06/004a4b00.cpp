// roc 2010-06 004a4b00  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b00
//
// 004a4b00  b85874b800           mov eax, 0xb87458
// 004a4b05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a4b00()
{
    return &G;
}
