// roc 2008-06 00427300  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427300
//
// 00427300  b8b0018100           mov eax, 0x8101b0
// 00427305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00427300()
{
    return &G;
}
