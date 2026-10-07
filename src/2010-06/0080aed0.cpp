// roc 2010-06 0080aed0  unit: CXTPTabClientWnd::CWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080aed0
//
// 0080aed0  b8300fa600           mov eax, 0xa60f30
// 0080aed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080aed0()
{
    return &G;
}
