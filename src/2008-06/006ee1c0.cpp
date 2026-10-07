// roc 2008-06 006ee1c0  unit: CXTPPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee1c0
//
// 006ee1c0  b8c0769600           mov eax, 0x9676c0
// 006ee1c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ee1c0()
{
    return &G;
}
