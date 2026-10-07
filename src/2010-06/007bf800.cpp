// roc 2010-06 007bf800  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bf800
//
// 007bf800  8bc1                 mov eax, ecx
// 007bf802  33c9                 xor ecx, ecx
// 007bf804  c700c073a500         mov dword ptr [eax], 0xa573c0
// 007bf80a  894804               mov dword ptr [eax + 4], ecx
// 007bf80d  894810               mov dword ptr [eax + 0x10], ecx
// 007bf810  89480c               mov dword ptr [eax + 0xc], ecx
// 007bf813  894808               mov dword ptr [eax + 8], ecx
// 007bf816  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007bf800
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007bf800();
};
S_func_007bf800::S_func_007bf800()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
