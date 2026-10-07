// roc 2007-08 006f0d30  unit: CXTPImageEditorPicker  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0d30
//
// 006f0d30  b840b27d00           mov eax, 0x7db240
// 006f0d35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f0d30()
{
    return &G;
}
