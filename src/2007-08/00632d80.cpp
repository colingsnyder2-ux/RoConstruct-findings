// roc 2007-08 00632d80  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632d80
//
// 00632d80  8bc1                 mov eax, ecx
// 00632d82  33c9                 xor ecx, ecx
// 00632d84  c700ec507c00         mov dword ptr [eax], 0x7c50ec
// 00632d8a  894804               mov dword ptr [eax + 4], ecx
// 00632d8d  894810               mov dword ptr [eax + 0x10], ecx
// 00632d90  89480c               mov dword ptr [eax + 0xc], ecx
// 00632d93  894808               mov dword ptr [eax + 8], ecx
// 00632d96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00632d80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00632d80();
};
S_func_00632d80::S_func_00632d80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
