// roc 2007-08 0041d690  unit: CInstanceExplorer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d690
//
// 0041d690  b8307d7800           mov eax, 0x787d30
// 0041d695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041d690()
{
    return &G;
}
