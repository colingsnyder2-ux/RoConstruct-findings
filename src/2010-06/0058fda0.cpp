// roc 2010-06 0058fda0  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058fda0
//
// 0058fda0  b810cbb900           mov eax, 0xb9cb10
// 0058fda5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058fda0()
{
    return &G;
}
