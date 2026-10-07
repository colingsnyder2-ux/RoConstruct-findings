// roc 2010-06 005add30  unit: RBX::GuiText::W4XAlignment::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005add30
//
// 005add30  b8d40aba00           mov eax, 0xba0ad4
// 005add35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005add30()
{
    return &G;
}
