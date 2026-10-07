// roc 2012-06 004546a0  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004546a0
//
// 004546a0  b8ac3ab500           mov eax, 0xb53aac
// 004546a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004546a0()
{
    return &G;
}
