// roc 2011-06 00443150  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00443150
//
// 00443150  b89890a600           mov eax, 0xa69098
// 00443155  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00443150()
{
    return &G;
}
