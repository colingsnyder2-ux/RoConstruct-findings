// roc 2012-06 00449240  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449240
//
// 00449240  b83023b500           mov eax, 0xb52330
// 00449245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449240()
{
    return &G;
}
