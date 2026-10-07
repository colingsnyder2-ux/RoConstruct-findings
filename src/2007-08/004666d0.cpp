// roc 2007-08 004666d0  unit: CWebToolbox  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004666d0
//
// 004666d0  b8705c7900           mov eax, 0x795c70
// 004666d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004666d0()
{
    return &G;
}
