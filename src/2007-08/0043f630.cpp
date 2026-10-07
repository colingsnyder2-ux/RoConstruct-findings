// roc 2007-08 0043f630  unit: CSelectionPropGrid  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0043f630
//
// 0043f630  b8e4e37800           mov eax, 0x78e3e4
// 0043f635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043f630()
{
    return &G;
}
