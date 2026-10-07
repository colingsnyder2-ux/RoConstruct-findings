// roc 2011-06 00492290  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00492290
//
// 00492290  b8904fa700           mov eax, 0xa74f90
// 00492295  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00492290()
{
    return &G;
}
