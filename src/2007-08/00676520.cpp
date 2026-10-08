// roc 2007-08 00676520  unit: CXTPCustomizeCommandsPage  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00676520
//
// 00676520  8bc1                 mov eax, ecx
// 00676522  33c9                 xor ecx, ecx
// 00676524  c70050ce7c00         mov dword ptr [eax], 0x7cce50
// 0067652a  894804               mov dword ptr [eax + 4], ecx
// 0067652d  894810               mov dword ptr [eax + 0x10], ecx
// 00676530  89480c               mov dword ptr [eax + 0xc], ecx
// 00676533  894808               mov dword ptr [eax + 8], ecx
// 00676536  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00676520
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00676520();
};
S_func_00676520::S_func_00676520()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
