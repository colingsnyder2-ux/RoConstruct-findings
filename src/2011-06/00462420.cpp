// roc 2011-06 00462420  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462420
//
// 00462420  b844eda600           mov eax, 0xa6ed44
// 00462425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462420()
{
    return &G;
}
