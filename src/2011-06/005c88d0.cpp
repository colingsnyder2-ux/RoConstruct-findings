// roc 2011-06 005c88d0  unit: RBX::ChatService::W4ChatColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c88d0
//
// 005c88d0  b820ecc300           mov eax, 0xc3ec20
// 005c88d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c88d0()
{
    return &G;
}
