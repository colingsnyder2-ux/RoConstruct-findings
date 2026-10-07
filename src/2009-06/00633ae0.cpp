// roc 2009-06 00633ae0  unit: RBX::Lua::VFunctionRef::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633ae0
//
// 00633ae0  b810caa000           mov eax, 0xa0ca10
// 00633ae5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00633ae0()
{
    return &G;
}
