// roc 2012-06 00448ec0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448ec0
//
// 00448ec0  b80c1eb500           mov eax, 0xb51e0c
// 00448ec5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00448ec0()
{
    return &G;
}
