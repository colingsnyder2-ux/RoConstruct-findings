// roc 2011-06 0058e350  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058e350
//
// 0058e350  b8b04ac300           mov eax, 0xc34ab0
// 0058e355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058e350()
{
    return &G;
}
