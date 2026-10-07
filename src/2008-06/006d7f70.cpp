// roc 2008-06 006d7f70  unit: CInstanceRecord  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7f70
//
// 006d7f70  8bc1                 mov eax, ecx
// 006d7f72  33c9                 xor ecx, ecx
// 006d7f74  c70044458500         mov dword ptr [eax], 0x854544
// 006d7f7a  894804               mov dword ptr [eax + 4], ecx
// 006d7f7d  894810               mov dword ptr [eax + 0x10], ecx
// 006d7f80  89480c               mov dword ptr [eax + 0xc], ecx
// 006d7f83  894808               mov dword ptr [eax + 8], ecx
// 006d7f86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006d7f70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006d7f70();
};
S_func_006d7f70::S_func_006d7f70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
