// roc 2008-06 00437840  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437840
//
// 00437840  b8a8358100           mov eax, 0x8135a8
// 00437845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00437840()
{
    return &G;
}
