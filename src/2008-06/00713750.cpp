// roc 2008-06 00713750  unit: CPropertyGridItemBrickColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00713750
//
// 00713750  b844d78500           mov eax, 0x85d744
// 00713755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00713750()
{
    return &G;
}
