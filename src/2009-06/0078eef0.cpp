// roc 2009-06 0078eef0  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078eef0
//
// 0078eef0  b800ee8f00           mov eax, 0x8fee00
// 0078eef5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078eef0()
{
    return &G;
}
