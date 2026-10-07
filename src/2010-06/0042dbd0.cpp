// roc 2010-06 0042dbd0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042dbd0
//
// 0042dbd0  b8245fa000           mov eax, 0xa05f24
// 0042dbd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042dbd0()
{
    return &G;
}
