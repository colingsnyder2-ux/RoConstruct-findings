// roc 2010-06 005ad360  unit: RBX::Controller::W4Button::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ad360
//
// 005ad360  b8c408ba00           mov eax, 0xba08c4
// 005ad365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ad360()
{
    return &G;
}
