// roc 2008-06 00422640  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422640
//
// 00422640  b83cfb8000           mov eax, 0x80fb3c
// 00422645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00422640()
{
    return &G;
}
