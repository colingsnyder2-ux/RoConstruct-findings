// roc 2010-06 00460f40  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00460f40
//
// 00460f40  b808dfa000           mov eax, 0xa0df08
// 00460f45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00460f40()
{
    return &G;
}
