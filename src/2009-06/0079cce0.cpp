// roc 2009-06 0079cce0  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079cce0
//
// 0079cce0  8bc1                 mov eax, ecx
// 0079cce2  33c9                 xor ecx, ecx
// 0079cce4  c700a8149000         mov dword ptr [eax], 0x9014a8
// 0079ccea  894804               mov dword ptr [eax + 4], ecx
// 0079cced  894810               mov dword ptr [eax + 0x10], ecx
// 0079ccf0  89480c               mov dword ptr [eax + 0xc], ecx
// 0079ccf3  894808               mov dword ptr [eax + 8], ecx
// 0079ccf6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0079cce0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0079cce0();
};
S_func_0079cce0::S_func_0079cce0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
