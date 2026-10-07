// roc 2007-08 00643630  unit: CXTPCommandBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00643630
//
// 00643630  b864568b00           mov eax, 0x8b5664
// 00643635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00643630()
{
    return &G;
}
