// roc 2008-06 0072e660  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e660
//
// 0072e660  8bc1                 mov eax, ecx
// 0072e662  33c9                 xor ecx, ecx
// 0072e664  c70010228600         mov dword ptr [eax], 0x862210
// 0072e66a  894804               mov dword ptr [eax + 4], ecx
// 0072e66d  894810               mov dword ptr [eax + 0x10], ecx
// 0072e670  89480c               mov dword ptr [eax + 0xc], ecx
// 0072e673  894808               mov dword ptr [eax + 8], ecx
// 0072e676  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0072e660
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0072e660();
};
S_func_0072e660::S_func_0072e660()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
