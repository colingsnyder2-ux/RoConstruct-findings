// roc 2007-08 005349b0  unit: RBX::Lua::VFunctionRef::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005349b0
//
// 005349b0  b8642d8800           mov eax, 0x882d64
// 005349b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005349b0()
{
    return &G;
}
