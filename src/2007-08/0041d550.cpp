// roc 2007-08 0041d550  unit: CInsertObjectDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d550
//
// 0041d550  b8607b7800           mov eax, 0x787b60
// 0041d555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041d550()
{
    return &G;
}
