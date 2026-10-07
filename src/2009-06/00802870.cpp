// roc 2009-06 00802870  unit: CXTColorPageStandard  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00802870
//
// 00802870  b8b4ad9000           mov eax, 0x90adb4
// 00802875  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00802870()
{
    return &G;
}
