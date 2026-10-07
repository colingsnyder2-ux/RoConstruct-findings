// roc 2007-08 0068e510  unit: CXTPTabClientWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068e510
//
// 0068e510  b8b8ff7c00           mov eax, 0x7cffb8
// 0068e515  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0068e510()
{
    return &G;
}
