// roc 2007-08 006f7060  unit: VCEdit::?$CXTMaskEditT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7060
//
// 006f7060  8bc1                 mov eax, ecx
// 006f7062  33c9                 xor ecx, ecx
// 006f7064  c70070c67d00         mov dword ptr [eax], 0x7dc670
// 006f706a  894804               mov dword ptr [eax + 4], ecx
// 006f706d  894810               mov dword ptr [eax + 0x10], ecx
// 006f7070  89480c               mov dword ptr [eax + 0xc], ecx
// 006f7073  894808               mov dword ptr [eax + 8], ecx
// 006f7076  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006f7060
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006f7060();
};
S_func_006f7060::S_func_006f7060()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
