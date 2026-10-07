// roc 2007-08 00632d40  unit: MyXTPCommandBars  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00632d40
//
// 00632d40  8bc1                 mov eax, ecx
// 00632d42  33c9                 xor ecx, ecx
// 00632d44  c700d4507c00         mov dword ptr [eax], 0x7c50d4
// 00632d4a  894804               mov dword ptr [eax + 4], ecx
// 00632d4d  894810               mov dword ptr [eax + 0x10], ecx
// 00632d50  89480c               mov dword ptr [eax + 0xc], ecx
// 00632d53  894808               mov dword ptr [eax + 8], ecx
// 00632d56  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00632d40
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00632d40();
};
S_func_00632d40::S_func_00632d40()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
