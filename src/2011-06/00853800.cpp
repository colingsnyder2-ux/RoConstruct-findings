// roc 2011-06 00853800  unit: CXTPPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853800
//
// 00853800  b83c70c900           mov eax, 0xc9703c
// 00853805  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00853800()
{
    return &G;
}
