// roc 2010-06 00413220  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00413220
//
// 00413220  b8282ea000           mov eax, 0xa02e28
// 00413225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00413220()
{
    return &G;
}
