// roc 2011-06 004a5b20  unit: RBX::Network::Player::W4MembershipType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5b20
//
// 004a5b20  b83ca2c100           mov eax, 0xc1a23c
// 004a5b25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5b20()
{
    return &G;
}
