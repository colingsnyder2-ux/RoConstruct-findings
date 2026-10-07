// roc 2009-06 00818c20  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818c20
//
// 00818c20  8bc1                 mov eax, ecx
// 00818c22  33c9                 xor ecx, ecx
// 00818c24  c700ccf59000         mov dword ptr [eax], 0x90f5cc
// 00818c2a  89480c               mov dword ptr [eax + 0xc], ecx
// 00818c2d  894808               mov dword ptr [eax + 8], ecx
// 00818c30  894804               mov dword ptr [eax + 4], ecx
// 00818c33  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00818c20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_00818c20();
};
S_func_00818c20::S_func_00818c20()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
