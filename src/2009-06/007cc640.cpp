// roc 2009-06 007cc640  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc640
//
// 007cc640  b89c5d9000           mov eax, 0x905d9c
// 007cc645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007cc640()
{
    return &G;
}
