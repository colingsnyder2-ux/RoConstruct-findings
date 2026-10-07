// roc 2007-08 0070e640  unit: CXTColorBase  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070e640
//
// 0070e640  b83ce07d00           mov eax, 0x7de03c
// 0070e645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070e640()
{
    return &G;
}
