// roc 2008-06 0079ebc0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ebc0
//
// 0079ebc0  b890bb9600           mov eax, 0x96bb90
// 0079ebc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079ebc0()
{
    return &G;
}
