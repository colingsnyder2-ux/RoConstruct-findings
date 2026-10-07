// roc 2010-06 007ead60  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ead60
//
// 007ead60  8bc1                 mov eax, ecx
// 007ead62  33c9                 xor ecx, ecx
// 007ead64  c7004cc0a500         mov dword ptr [eax], 0xa5c04c
// 007ead6a  894804               mov dword ptr [eax + 4], ecx
// 007ead6d  894810               mov dword ptr [eax + 0x10], ecx
// 007ead70  89480c               mov dword ptr [eax + 0xc], ecx
// 007ead73  894808               mov dword ptr [eax + 8], ecx
// 007ead76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007ead60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007ead60();
};
S_func_007ead60::S_func_007ead60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
