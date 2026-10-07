// roc 2008-06 00701600  unit: CXTPControlTabWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701600
//
// 00701600  b81c7d9600           mov eax, 0x967d1c
// 00701605  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00701600()
{
    return &G;
}
