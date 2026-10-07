// roc 2011-06 00482050  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00482050
//
// 00482050  b8bc22a700           mov eax, 0xa722bc
// 00482055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00482050()
{
    return &G;
}
