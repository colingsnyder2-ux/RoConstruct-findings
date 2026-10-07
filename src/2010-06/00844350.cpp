// roc 2010-06 00844350  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00844350
//
// 00844350  b86095be00           mov eax, 0xbe9560
// 00844355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00844350()
{
    return &G;
}
