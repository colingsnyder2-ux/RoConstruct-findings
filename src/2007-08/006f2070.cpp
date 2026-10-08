// roc 2007-08 006f2070  unit: CStatic  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2070
//
// 006f2070  b898b67d00           mov eax, 0x7db698
// 006f2075  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f2070()
{
    return &G;
}
