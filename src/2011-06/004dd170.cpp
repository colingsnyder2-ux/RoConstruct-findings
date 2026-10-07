// roc 2011-06 004dd170  unit: W4PacketReliability::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dd170
//
// 004dd170  b8206ac200           mov eax, 0xc26a20
// 004dd175  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004dd170()
{
    return &G;
}
