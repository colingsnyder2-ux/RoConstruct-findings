// roc 2008-06 005945c0  unit: RBX::Lua::VFunctionRef::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005945c0
//
// 005945c0  b8d0c29200           mov eax, 0x92c2d0
// 005945c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005945c0()
{
    return &G;
}
