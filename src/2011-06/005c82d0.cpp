// roc 2011-06 005c82d0  unit: RBX::GuiService::W4SpecialKey::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c82d0
//
// 005c82d0  b8a0eac300           mov eax, 0xc3eaa0
// 005c82d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c82d0()
{
    return &G;
}
