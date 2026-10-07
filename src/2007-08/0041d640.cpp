// roc 2007-08 0041d640  unit: CInsertObjectDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d640
//
// 0041d640  b8e87c7800           mov eax, 0x787ce8
// 0041d645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041d640()
{
    return &G;
}
