// roc 2009-06 00419d90  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419d90
//
// 00419d90  b87cfc8a00           mov eax, 0x8afc7c
// 00419d95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00419d90()
{
    return &G;
}
