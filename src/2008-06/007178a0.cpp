// roc 2008-06 007178a0  unit: CXTPPropertyGridItemEnum  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007178a0
//
// 007178a0  b80ce38500           mov eax, 0x85e30c
// 007178a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007178a0()
{
    return &G;
}
