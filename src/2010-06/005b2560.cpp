// roc 2010-06 005b2560  unit: RBX::BaseScript::W4ScriptExecutionLocation::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2560
//
// 005b2560  b8c41bba00           mov eax, 0xba1bc4
// 005b2565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b2560()
{
    return &G;
}
