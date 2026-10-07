// roc 2007-08 00438710  unit: CSelectionPropGrid  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00438710
//
// 00438710  b85cd37800           mov eax, 0x78d35c
// 00438715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00438710()
{
    return &G;
}
