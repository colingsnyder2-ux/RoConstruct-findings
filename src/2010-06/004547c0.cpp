// roc 2010-06 004547c0  unit: CRobloxControlMaterialSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004547c0
//
// 004547c0  b83826b800           mov eax, 0xb82638
// 004547c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004547c0()
{
    return &G;
}
