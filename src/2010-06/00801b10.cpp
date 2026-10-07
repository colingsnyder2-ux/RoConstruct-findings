// roc 2010-06 00801b10  unit: CXTPPropertyGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801b10
//
// 00801b10  b848ffa500           mov eax, 0xa5ff48
// 00801b15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00801b10()
{
    return &G;
}
