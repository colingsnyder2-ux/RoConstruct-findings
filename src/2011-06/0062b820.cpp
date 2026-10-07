// roc 2011-06 0062b820  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062b820
//
// 0062b820  b8f8c6c300           mov eax, 0xc3c6f8
// 0062b825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0062b820()
{
    return &G;
}
