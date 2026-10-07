// roc 2011-06 0080df90  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080df90
//
// 0080df90  8bc1                 mov eax, ecx
// 0080df92  33c9                 xor ecx, ecx
// 0080df94  c7003017ac00         mov dword ptr [eax], 0xac1730
// 0080df9a  894804               mov dword ptr [eax + 4], ecx
// 0080df9d  894810               mov dword ptr [eax + 0x10], ecx
// 0080dfa0  89480c               mov dword ptr [eax + 0xc], ecx
// 0080dfa3  894808               mov dword ptr [eax + 8], ecx
// 0080dfa6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0080df90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080df90();
};
S_func_0080df90::S_func_0080df90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
