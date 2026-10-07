// roc 2009-06 0076a2f0  unit: CXTPControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076a2f0
//
// 0076a2f0  b814a18f00           mov eax, 0x8fa114
// 0076a2f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076a2f0()
{
    return &G;
}
