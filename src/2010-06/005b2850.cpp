// roc 2010-06 005b2850  unit: RBX::GuiService::W4SpecialKey::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2850
//
// 005b2850  b8981cba00           mov eax, 0xba1c98
// 005b2855  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b2850()
{
    return &G;
}
