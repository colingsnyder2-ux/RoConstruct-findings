// roc 2011-06 005c1f40  unit: RBX::Controller::W4Button::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1f40
//
// 005c1f40  b804d1c300           mov eax, 0xc3d104
// 005c1f45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c1f40()
{
    return &G;
}
