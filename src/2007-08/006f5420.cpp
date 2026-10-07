// roc 2007-08 006f5420  unit: CXTPControlCustom  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5420
//
// 006f5420  b8ac958b00           mov eax, 0x8b95ac
// 006f5425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f5420()
{
    return &G;
}
