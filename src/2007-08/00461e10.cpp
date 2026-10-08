// roc 2007-08 00461e10  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461e10
//
// 00461e10  b8cc527900           mov eax, 0x7952cc
// 00461e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461e10()
{
    return &G;
}
