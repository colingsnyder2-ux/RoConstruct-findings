// roc 2011-06 00881f00  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881f00
//
// 00881f00  8bc1                 mov eax, ecx
// 00881f02  33c9                 xor ecx, ecx
// 00881f04  c70008fbac00         mov dword ptr [eax], 0xacfb08
// 00881f0a  894804               mov dword ptr [eax + 4], ecx
// 00881f0d  894810               mov dword ptr [eax + 0x10], ecx
// 00881f10  89480c               mov dword ptr [eax + 0xc], ecx
// 00881f13  894808               mov dword ptr [eax + 8], ecx
// 00881f16  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00881f00
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00881f00();
};
S_func_00881f00::S_func_00881f00()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
