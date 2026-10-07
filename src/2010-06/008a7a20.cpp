// roc 2010-06 008a7a20  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7a20
//
// 008a7a20  8bc1                 mov eax, ecx
// 008a7a22  33c9                 xor ecx, ecx
// 008a7a24  c700343da700         mov dword ptr [eax], 0xa73d34
// 008a7a2a  89480c               mov dword ptr [eax + 0xc], ecx
// 008a7a2d  894808               mov dword ptr [eax + 8], ecx
// 008a7a30  894804               mov dword ptr [eax + 4], ecx
// 008a7a33  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008a7a20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_008a7a20();
};
S_func_008a7a20::S_func_008a7a20()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
