// roc 2009-06 00421f50  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00421f50
//
// 00421f50  b860098b00           mov eax, 0x8b0960
// 00421f55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00421f50()
{
    return &G;
}
