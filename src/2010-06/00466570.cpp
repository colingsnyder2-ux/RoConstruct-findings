// roc 2010-06 00466570  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00466570
//
// 00466570  b898f2a000           mov eax, 0xa0f298
// 00466575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466570()
{
    return &G;
}
