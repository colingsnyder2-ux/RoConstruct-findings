// roc 2008-06 006ee710  unit: CXTPPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee710
//
// 006ee710  b8dc769600           mov eax, 0x9676dc
// 006ee715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ee710()
{
    return &G;
}
