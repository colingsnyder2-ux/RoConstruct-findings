// roc 2012-06 004189f0  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004189f0
//
// 004189f0  b8d86bb400           mov eax, 0xb46bd8
// 004189f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004189f0()
{
    return &G;
}
