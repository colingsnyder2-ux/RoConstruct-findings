// roc 2010-06 0041d1c0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041d1c0
//
// 0041d1c0  b89c3ca000           mov eax, 0xa03c9c
// 0041d1c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041d1c0()
{
    return &G;
}
