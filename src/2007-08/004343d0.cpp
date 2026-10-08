// roc 2007-08 004343d0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004343d0
//
// 004343d0  b84cc37800           mov eax, 0x78c34c
// 004343d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004343d0()
{
    return &G;
}
