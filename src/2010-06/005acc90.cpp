// roc 2010-06 005acc90  unit: RBX::Action::W4ActionType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005acc90
//
// 005acc90  b89407ba00           mov eax, 0xba0794
// 005acc95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005acc90()
{
    return &G;
}
