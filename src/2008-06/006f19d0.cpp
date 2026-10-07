// roc 2008-06 006f19d0  unit: CXTPOriginalControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f19d0
//
// 006f19d0  b8d8908500           mov eax, 0x8590d8
// 006f19d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f19d0()
{
    return &G;
}
