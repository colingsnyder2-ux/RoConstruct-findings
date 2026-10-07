// roc 2010-06 00824e70  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824e70
//
// 00824e70  8bc1                 mov eax, ecx
// 00824e72  33c9                 xor ecx, ecx
// 00824e74  c700e850a600         mov dword ptr [eax], 0xa650e8
// 00824e7a  894804               mov dword ptr [eax + 4], ecx
// 00824e7d  894810               mov dword ptr [eax + 0x10], ecx
// 00824e80  89480c               mov dword ptr [eax + 0xc], ecx
// 00824e83  894808               mov dword ptr [eax + 8], ecx
// 00824e86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00824e70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00824e70();
};
S_func_00824e70::S_func_00824e70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
