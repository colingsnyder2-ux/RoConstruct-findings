// roc 2011-06 004a5b60  unit: RBX::Network::Player::W4ChatMode::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5b60
//
// 004a5b60  b870a2c100           mov eax, 0xc1a270
// 004a5b65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5b60()
{
    return &G;
}
