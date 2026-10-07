// roc 2010-06 005ae020  unit: RBX::GuiText::W4YAlignment::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae020
//
// 005ae020  b87c0bba00           mov eax, 0xba0b7c
// 005ae025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ae020()
{
    return &G;
}
