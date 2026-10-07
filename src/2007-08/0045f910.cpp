// roc 2007-08 0045f910  unit: CScriptEditor  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f910
//
// 0045f910  b8e8497900           mov eax, 0x7949e8
// 0045f915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045f910()
{
    return &G;
}
