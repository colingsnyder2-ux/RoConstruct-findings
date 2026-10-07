// roc 2010-06 004d0a10  unit: W4PacketReliability::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d0a10
//
// 004d0a10  b894eab800           mov eax, 0xb8ea94
// 004d0a15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004d0a10()
{
    return &G;
}
