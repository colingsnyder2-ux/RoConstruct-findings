// roc 2008-06 00745630  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745630
//
// 00745630  b874959600           mov eax, 0x969574
// 00745635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00745630()
{
    return &G;
}
