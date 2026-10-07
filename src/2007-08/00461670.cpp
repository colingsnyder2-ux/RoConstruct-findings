// roc 2007-08 00461670  unit: CScriptEditor  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00461670
//
// 00461670  b82c4e7900           mov eax, 0x794e2c
// 00461675  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461670()
{
    return &G;
}
