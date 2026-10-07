// roc 2011-06 00850460  unit: CXTPToolBar::CControlButtonExpand  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850460
//
// 00850460  b8c86ec900           mov eax, 0xc96ec8
// 00850465  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00850460()
{
    return &G;
}
