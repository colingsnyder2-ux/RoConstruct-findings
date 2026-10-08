// roc 2007-08 0041f780  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f780
//
// 0041f780  b83c827800           mov eax, 0x78823c
// 0041f785  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041f780()
{
    return &G;
}
