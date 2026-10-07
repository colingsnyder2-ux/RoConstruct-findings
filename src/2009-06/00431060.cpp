// roc 2009-06 00431060  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431060
//
// 00431060  b8403b8b00           mov eax, 0x8b3b40
// 00431065  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00431060()
{
    return &G;
}
