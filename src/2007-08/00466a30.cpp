// roc 2007-08 00466a30  unit: CWebToolbox  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00466a30
//
// 00466a30  b8fc5e7900           mov eax, 0x795efc
// 00466a35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466a30()
{
    return &G;
}
