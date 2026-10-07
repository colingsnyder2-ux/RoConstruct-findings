// roc 2009-06 00793e80  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793e80
//
// 00793e80  8bc1                 mov eax, ecx
// 00793e82  33c9                 xor ecx, ecx
// 00793e84  c70088019000         mov dword ptr [eax], 0x900188
// 00793e8a  894804               mov dword ptr [eax + 4], ecx
// 00793e8d  894810               mov dword ptr [eax + 0x10], ecx
// 00793e90  89480c               mov dword ptr [eax + 0xc], ecx
// 00793e93  894808               mov dword ptr [eax + 8], ecx
// 00793e96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00793e80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00793e80();
};
S_func_00793e80::S_func_00793e80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
