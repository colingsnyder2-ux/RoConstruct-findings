// roc 2007-08 0068ba80  unit: CXTPTabClientWnd::CWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068ba80
//
// 0068ba80  b8f0fe7c00           mov eax, 0x7cfef0
// 0068ba85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0068ba80()
{
    return &G;
}
