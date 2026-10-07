// roc 2012-06 00418550  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418550
//
// 00418550  b84467b400           mov eax, 0xb46744
// 00418555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00418550()
{
    return &G;
}
