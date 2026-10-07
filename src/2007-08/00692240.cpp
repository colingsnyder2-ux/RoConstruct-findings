// roc 2007-08 00692240  unit: CXTPStatusBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00692240
//
// 00692240  b8f4087d00           mov eax, 0x7d08f4
// 00692245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00692240()
{
    return &G;
}
