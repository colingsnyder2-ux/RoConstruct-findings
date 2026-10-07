// roc 2008-06 005ecce0  unit: RBX::Controller::W4InputType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecce0
//
// 005ecce0  b8205e9500           mov eax, 0x955e20
// 005ecce5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ecce0()
{
    return &G;
}
