// roc 2011-06 00423df0  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423df0
//
// 00423df0  b87446a600           mov eax, 0xa64674
// 00423df5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00423df0()
{
    return &G;
}
