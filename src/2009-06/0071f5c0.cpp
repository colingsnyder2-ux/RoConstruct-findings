// roc 2009-06 0071f5c0  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f5c0
//
// 0071f5c0  b850218f00           mov eax, 0x8f2150
// 0071f5c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071f5c0()
{
    return &G;
}
