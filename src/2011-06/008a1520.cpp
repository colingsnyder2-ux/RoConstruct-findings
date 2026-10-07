// roc 2011-06 008a1520  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a1520
//
// 008a1520  b8208cc900           mov eax, 0xc98c20
// 008a1525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a1520()
{
    return &G;
}
