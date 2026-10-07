// roc 2008-06 007931c0  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007931c0
//
// 007931c0  b828b38600           mov eax, 0x86b328
// 007931c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007931c0()
{
    return &G;
}
