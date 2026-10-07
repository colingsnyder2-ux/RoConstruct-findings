// roc 2008-06 0044f200  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f200
//
// 0044f200  b8c0728100           mov eax, 0x8172c0
// 0044f205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044f200()
{
    return &G;
}
