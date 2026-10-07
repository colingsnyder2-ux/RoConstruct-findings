// roc 2008-06 006bc220  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bc220
//
// 006bc220  8bc1                 mov eax, ecx
// 006bc222  33c9                 xor ecx, ecx
// 006bc224  c70008218500         mov dword ptr [eax], 0x852108
// 006bc22a  894804               mov dword ptr [eax + 4], ecx
// 006bc22d  894810               mov dword ptr [eax + 0x10], ecx
// 006bc230  89480c               mov dword ptr [eax + 0xc], ecx
// 006bc233  894808               mov dword ptr [eax + 8], ecx
// 006bc236  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006bc220
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006bc220();
};
S_func_006bc220::S_func_006bc220()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
