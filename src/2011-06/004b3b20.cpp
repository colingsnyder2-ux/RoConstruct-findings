// roc 2011-06 004b3b20  unit: RBX::FriendService::W4FriendStatus::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b3b20
//
// 004b3b20  b8acddc100           mov eax, 0xc1ddac
// 004b3b25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b3b20()
{
    return &G;
}
