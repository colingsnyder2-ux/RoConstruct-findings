// roc 2011-06 0080df50  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080df50
//
// 0080df50  8bc1                 mov eax, ecx
// 0080df52  33c9                 xor ecx, ecx
// 0080df54  c7001817ac00         mov dword ptr [eax], 0xac1718
// 0080df5a  894804               mov dword ptr [eax + 4], ecx
// 0080df5d  894810               mov dword ptr [eax + 0x10], ecx
// 0080df60  89480c               mov dword ptr [eax + 0xc], ecx
// 0080df63  894808               mov dword ptr [eax + 8], ecx
// 0080df66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0080df50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080df50();
};
S_func_0080df50::S_func_0080df50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
