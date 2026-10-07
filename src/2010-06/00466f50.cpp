// roc 2010-06 00466f50  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00466f50
//
// 00466f50  b8e0f4a000           mov eax, 0xa0f4e0
// 00466f55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466f50()
{
    return &G;
}
