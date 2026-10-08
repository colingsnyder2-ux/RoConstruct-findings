// from server: 100% by colin
// roc 2007-08 0067f2b0  unit: CXTPControlSelector  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f2b0
//
// 0067f2b0  33c0                 xor eax, eax
// 0067f2b2  3905548f8c00         cmp dword ptr [0x8c8f54], eax
// 0067f2b8  0f95c0               setne al
// 0067f2bb  c3                   ret 

extern int g_008c8f54;

int func_0067f2b0()
{
    return g_008c8f54 != 0;
}
