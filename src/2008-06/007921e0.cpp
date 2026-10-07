// roc 2008-06 007921e0  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007921e0
//
// 007921e0  b850b18600           mov eax, 0x86b150
// 007921e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007921e0()
{
    return &G;
}
