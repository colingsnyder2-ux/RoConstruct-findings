// roc 2011-06 005c1990  unit: RBX::Action::W4ActionType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1990
//
// 005c1990  b8d4cfc300           mov eax, 0xc3cfd4
// 005c1995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c1990()
{
    return &G;
}
