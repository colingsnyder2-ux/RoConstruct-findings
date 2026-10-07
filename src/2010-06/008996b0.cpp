// roc 2010-06 008996b0  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008996b0
//
// 008996b0  b8e008a700           mov eax, 0xa708e0
// 008996b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008996b0()
{
    return &G;
}
