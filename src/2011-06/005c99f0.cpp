// roc 2011-06 005c99f0  unit: RBX::GuiButton::W4Style::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c99f0
//
// 005c99f0  b880f0c300           mov eax, 0xc3f080
// 005c99f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c99f0()
{
    return &G;
}
