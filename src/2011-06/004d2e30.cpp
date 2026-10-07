// roc 2011-06 004d2e30  unit: RBX::FriendService::W4FriendEventType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d2e30
//
// 004d2e30  b8104fc200           mov eax, 0xc24f10
// 004d2e35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004d2e30()
{
    return &G;
}
