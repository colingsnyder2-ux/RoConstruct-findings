// roc 2007-08 0040ec30  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ec30
//
// 0040ec30  b824697800           mov eax, 0x786924
// 0040ec35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040ec30()
{
    return &G;
}
