// roc 2010-06 005ae600  unit: RBX::LegacyController::W4InputType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae600
//
// 005ae600  b8ec0cba00           mov eax, 0xba0cec
// 005ae605  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ae600()
{
    return &G;
}
