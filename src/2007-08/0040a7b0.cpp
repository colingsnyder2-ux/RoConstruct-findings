// roc 2007-08 0040a7b0  unit: CBrowserView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a7b0
//
// 0040a7b0  b830557800           mov eax, 0x785530
// 0040a7b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a7b0()
{
    return &G;
}
