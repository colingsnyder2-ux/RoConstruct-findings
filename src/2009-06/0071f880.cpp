// roc 2009-06 0071f880  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f880
//
// 0071f880  b80051a200           mov eax, 0xa25100
// 0071f885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071f880()
{
    return &G;
}
