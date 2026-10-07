// roc 2010-06 00433550  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00433550
//
// 00433550  b85076a000           mov eax, 0xa07650
// 00433555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433550()
{
    return &G;
}
