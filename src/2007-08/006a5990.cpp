// roc 2007-08 006a5990  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5990
//
// 006a5990  b8f07b8b00           mov eax, 0x8b7bf0
// 006a5995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a5990()
{
    return &G;
}
