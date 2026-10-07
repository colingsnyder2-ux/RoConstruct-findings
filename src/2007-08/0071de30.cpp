// roc 2007-08 0071de30  unit: CXTPDialogBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0071de30
//
// 0071de30  b818a98b00           mov eax, 0x8ba918
// 0071de35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071de30()
{
    return &G;
}
