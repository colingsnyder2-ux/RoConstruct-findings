// roc 2007-08 007008a0  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007008a0
//
// 007008a0  8bc1                 mov eax, ecx
// 007008a2  33c9                 xor ecx, ecx
// 007008a4  c7004cd27d00         mov dword ptr [eax], 0x7dd24c
// 007008aa  894804               mov dword ptr [eax + 4], ecx
// 007008ad  894810               mov dword ptr [eax + 0x10], ecx
// 007008b0  89480c               mov dword ptr [eax + 0xc], ecx
// 007008b3  894808               mov dword ptr [eax + 8], ecx
// 007008b6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007008a0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007008a0();
};
S_func_007008a0::S_func_007008a0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
