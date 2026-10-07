// roc 2009-06 0042cf40  unit: CDeclarationView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042cf40
//
// 0042cf40  b8e02a8b00           mov eax, 0x8b2ae0
// 0042cf45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042cf40()
{
    return &G;
}
