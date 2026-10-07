// roc 2011-06 0047b410  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047b410
//
// 0047b410  b87c0da700           mov eax, 0xa70d7c
// 0047b415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047b410()
{
    return &G;
}
