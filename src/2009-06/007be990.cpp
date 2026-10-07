// roc 2009-06 007be990  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007be990
//
// 007be990  b81c88a200           mov eax, 0xa2881c
// 007be995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007be990()
{
    return &G;
}
