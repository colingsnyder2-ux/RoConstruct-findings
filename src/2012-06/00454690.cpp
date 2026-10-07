// roc 2012-06 00454690  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454690
//
// 00454690  b8903ab500           mov eax, 0xb53a90
// 00454695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454690()
{
    return &G;
}
