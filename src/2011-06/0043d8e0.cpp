// roc 2011-06 0043d8e0  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d8e0
//
// 0043d8e0  b84c7fa600           mov eax, 0xa67f4c
// 0043d8e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d8e0()
{
    return &G;
}
