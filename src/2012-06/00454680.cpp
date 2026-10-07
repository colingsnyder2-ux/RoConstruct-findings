// roc 2012-06 00454680  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454680
//
// 00454680  b8743ab500           mov eax, 0xb53a74
// 00454685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454680()
{
    return &G;
}
