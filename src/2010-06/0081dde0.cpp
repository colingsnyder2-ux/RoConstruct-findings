// roc 2010-06 0081dde0  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081dde0
//
// 0081dde0  8bc1                 mov eax, ecx
// 0081dde2  33c9                 xor ecx, ecx
// 0081dde4  c7006c35a600         mov dword ptr [eax], 0xa6356c
// 0081ddea  894804               mov dword ptr [eax + 4], ecx
// 0081dded  894810               mov dword ptr [eax + 0x10], ecx
// 0081ddf0  89480c               mov dword ptr [eax + 0xc], ecx
// 0081ddf3  894808               mov dword ptr [eax + 8], ecx
// 0081ddf6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0081dde0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0081dde0();
};
S_func_0081dde0::S_func_0081dde0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
