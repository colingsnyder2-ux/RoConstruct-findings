// roc 2011-06 0089d810  unit: CXTPControlEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089d810
//
// 0089d810  b8f01cad00           mov eax, 0xad1cf0
// 0089d815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089d810()
{
    return &G;
}
