// roc 2011-06 009010f0  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009010f0
//
// 009010f0  8bc1                 mov eax, ecx
// 009010f2  33c9                 xor ecx, ecx
// 009010f4  c7008ce1ad00         mov dword ptr [eax], 0xade18c
// 009010fa  89480c               mov dword ptr [eax + 0xc], ecx
// 009010fd  894808               mov dword ptr [eax + 8], ecx
// 00901100  894804               mov dword ptr [eax + 4], ecx
// 00901103  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_009010f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_009010f0();
};
S_func_009010f0::S_func_009010f0()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
