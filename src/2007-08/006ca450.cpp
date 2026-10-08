// roc 2007-08 006ca450  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca450
//
// 006ca450  b854848b00           mov eax, 0x8b8454
// 006ca455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ca450()
{
    return &G;
}
