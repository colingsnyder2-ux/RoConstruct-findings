// roc 2008-06 006ec5a0  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec5a0
//
// 006ec5a0  b8747a8500           mov eax, 0x857a74
// 006ec5a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ec5a0()
{
    return &G;
}
