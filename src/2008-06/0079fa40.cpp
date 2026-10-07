// roc 2008-06 0079fa40  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fa40
//
// 0079fa40  b8a8e38600           mov eax, 0x86e3a8
// 0079fa45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079fa40()
{
    return &G;
}
