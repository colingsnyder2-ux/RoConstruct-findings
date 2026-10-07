// roc 2012-06 004788f0  unit: CRobloxControlMaterialSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004788f0
//
// 004788f0  b864d4d600           mov eax, 0xd6d464
// 004788f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004788f0()
{
    return &G;
}
