// roc 2007-08 00697990  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697990
//
// 00697990  b8dc157d00           mov eax, 0x7d15dc
// 00697995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00697990()
{
    return &G;
}
