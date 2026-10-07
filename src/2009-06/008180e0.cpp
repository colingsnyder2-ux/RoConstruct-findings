// roc 2009-06 008180e0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008180e0
//
// 008180e0  b8d0f39000           mov eax, 0x90f3d0
// 008180e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008180e0()
{
    return &G;
}
