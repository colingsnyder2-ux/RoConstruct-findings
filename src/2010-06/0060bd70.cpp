// roc 2010-06 0060bd70  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bd70
//
// 0060bd70  b878f7ba00           mov eax, 0xbaf778
// 0060bd75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0060bd70()
{
    return &G;
}
